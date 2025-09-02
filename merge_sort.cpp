#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &arr, int left, int mid, int right) {
    vector<int> temp;

    int i = left;
    int j = mid + 1;
    while(i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        }
        else {
            temp.push_back(arr[j++]);
        }
    }

    while(i<=mid) {
        temp.push_back(arr[i++]);
    }
    while(j<=right){
        temp.push_back(arr[j++]);
    }

    for(int k = left; k <= right; k++) {
        arr[k] = temp[k-left];
    }
}

void mergeSort(vector<int> &arr, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left)/2;
    mergeSort(arr,left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main(){
    vector<int> arr = {99,1,67,9,63,10,35,90,23,77};
    mergeSort(arr, 0, arr.size() - 1);
    
    for (int n : arr) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}