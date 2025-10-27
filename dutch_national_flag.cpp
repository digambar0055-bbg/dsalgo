// digambarmandhare@Digambars-MacBook-Air dsalgo % g++ -std=c++17 dutch_national_flag.cpp
// digambarmandhare@Digambars-MacBook-Air dsalgo % ./a.out 
// Sorted: 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 2 2 2 2 2 

#include<iostream>
#include<vector>

int main() {
    std::vector<int> input = {2,0,2,1,1,0,1,1,1,1,1,0,0,0,0,0,0,2,2,2};
    int low = 0;
    int mid = 1;
    int high = input.size() - 1;

    for (mid = 0; mid <= high; ) {
        if(input[mid] == 0) {
            input[mid] = input[low];
            input[low] = 0;
            low++;
            mid++;
        }
        else if (input[mid] == 2) {
            input[mid] = input[high];
            input[high] = 2;
            high--;
        }   
        else {
            mid++;
        }
    }

    std::cout << "Sorted: ";
    for (int x : input) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}