#include<iostream>
#include<queue>

using namespace std;

void generateBinaryNumber(const int N){
    queue<string> q;
    q.push("1");

    for (int i = 1; i < N; i++) {
        string curr = q.front();
        q.pop();

        cout << curr << endl;
        q.push(curr + "0");
        q.push(curr + "1");
    }
}
int main() {
    int N = 10;
    generateBinaryNumber(N);
    return 0;
}