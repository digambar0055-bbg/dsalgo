#include<iostream>
#include<queue>

using namespace std;

int main() {
    int Q;

    // Remember how to define the min heap..
    priority_queue<int, vector<int>, greater<int> > minHeap;
    cout << "Insert the total number of operations: " << endl;
    cin >> Q;

    while(Q--) {
        int type;
        cout << "Insert the operation: ";
        cin >> type;
        if (type == 1) {
            // Insert element in heap
            int n;
            cout << "Insert the element to insert in queue: ";
            cin >> n;
            minHeap.push(n);
        } else if (type == 2) {
            // Remove min element from heap
            if(!minHeap.empty()){
                minHeap.pop();
            } else {
                cout << "Sorry! The min heap is empty!!" << endl;
            }
        }
        else {
            // Print min element from heap
            if(!minHeap.empty()) {
                cout << minHeap.top() << endl;
            } else {
                cout << "Sorry! The min heap is empty!!" << endl;
            }
        }
    }
    return 0;
}