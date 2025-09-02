// How to compile this - g++ -std=c++17 bubble_sort.cpp

#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int> &arr, int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return;
}
int main(){
    vector<int> arr = {99,1,67,9,63,10,35,90,23,77};
    bubbleSort(arr, arr.size());
    
    for (int n : arr) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}