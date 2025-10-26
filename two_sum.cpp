// Problem 1: Two Sum
// 🧩 Problem Statement

// You are given an array of integers nums and an integer target.
// Return indices of the two numbers such that they add up to the target.

// You may assume that each input would have exactly one solution.
// You may not use the same element twice.
// Return the answer in any order.

// How to compile and run - 
// digambarmandhare@Digambars-MacBook-Air dsalgo % g++ two_sum.cpp -std=c++17
// digambarmandhare@Digambars-MacBook-Air dsalgo % ./a.out 
// Input array:  2 7 11 15
// Setting x - target in map: 7 For x: 2
// Indices making up the sum: 1 & 0


#include<iostream>
#include<map>

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::unordered_map<int, int> sum_map;

    std::cout << "Input array: ";
    for (int x : nums) {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    for(int i = 0; i < nums.size(); i++) {
        if(sum_map.find(target - nums[i]) != sum_map.end()){
            std::cout << "Indices making up the sum: " << i << " & " << sum_map[target - nums[i]] 
            << std::endl;
            return 0;
        }
        else {
            std::cout << "Setting x - target in map: " << (target - nums[i]) 
            << " For x: " << nums[i] << std::endl;
            sum_map[nums[i]] = i;
        }
    }
    return 0;
}

