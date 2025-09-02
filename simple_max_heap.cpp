#include<iostream>
#include<queue>

using namespace std;

int main() {
    int Q;
    
    // Remember how to define the maxHeap..
    priority_queue<int> maxHeap;

    cout << "Insert the number of operations: " << endl;
    cin >> Q;

    while(Q--) {
        int type;
        cout << "Please insert the type of operation:";
        cin >> type;

        // Insert into the max heap
        if (type == 1) {
            int n;
            cout << "Please insert the number to insert into the max heap: ";
            cin >> n;
            maxHeap.push(n);
        } else if (type == 2) {
            // Delete the max element from the heap;
            if (!maxHeap.empty()){
                maxHeap.pop();
            } else {
               cout << "Sorry!! The max heap is empty!" << endl;
            }
        } else {
            if (!maxHeap.empty()) {
                cout << "The max element in the heap is: " << maxHeap.top() << endl;
            } else {
               cout << "Sorry!! The max heap is empty!" << endl;
            }
        }
    }
    return 0;
}