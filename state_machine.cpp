#include<iostream>
#include<string>
#include<map>

// How to compile - 
// g++ state_machine.cpp -std=c++11 
enum class Event
{
	START,
	PAUSE,
	STOP
};

enum class State
{
	IDLE,
	RUNNING,
	STOPPED
};

class StateMachine
{
	private:
		State currentState;
		std::map<std::pair<State, Event>, State> transitions;
	public:
		StateMachine(State initialState) : currentState(initialState)
		{
			transitions[{State::IDLE, Event::START}] = State::RUNNING;
			transitions[{State::RUNNING, Event::PAUSE}] = State::IDLE;
			transitions[{State::RUNNING, Event::STOP}] = State::STOPPED;
			transitions[{State::STOPPED, Event::START}] = State::RUNNING;
		}
		
		void onEvent(Event event)
		{
			auto transition = transitions.find({currentState,event});
			if(transition != transitions.end())
			{
				currentState = transition->second;
				std::cout << "Transitioned to state: " << stateToString(currentState) << std::endl;
			}
			else
			{
				std::cout << "Invalid transition" << std::endl;
			}
		}

		std::string stateToString(State state)
		{
			switch(state)
			{
				case State::IDLE: return "IDLE";
				case State::RUNNING: return "RUNNING";
				case State::STOPPED: return "STOPPED";
				default: return "INVALID";
			}
		}

};
int main()
{
	StateMachine fsm(State::IDLE);

	fsm.onEvent(Event::START);
	fsm.onEvent(Event::PAUSE);
	fsm.onEvent(Event::START);
	fsm.onEvent(Event::STOP);
	return 0;
}