#include<iostream>
#include<queue>
#include<string>

using namespace std;

string firstNonRepeating(const string &stream) {
    vector<int> freq(26, 0);
    queue<char> q;
    string result;

    for (char ch : stream) {
        int idx  = ch - 'a';
        freq[idx]++;
        q.push(ch);

        while(!q.empty() && freq[q.front() - 'a'] > 1) {
            q.pop();
        }

        if(q.empty()) {
            result.push_back('-');
        }
        else {
            result.push_back(q.front());
        }
    }

    return result;
}

int main() {
    string stream = "aabc";
    cout << "Input: " << stream << endl;
    cout << "Output: " << firstNonRepeating(stream) << endl;
    return 0;
}