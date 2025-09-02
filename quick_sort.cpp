#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int> &arr, int i, int j) {
    if (i < j){
        int pi = partition(arr, i, j);
        quickSort(arr, i, pi);
        quickSort(arr, pi + 1, j);
    }
}

int main() {
    vector<int> arr = {99,1,67,9,63,10,35,90,23,77};
    
    quickSort(arr, 0, arr.size() - 1);
    
    for (int n : arr) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}