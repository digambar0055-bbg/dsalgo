// Problem 2: Best Time to Buy and Sell Stock
// 🧩 Problem Statement

// You are given an array prices where prices[i] is the stock price on day i.
// You can choose exactly one day to buy a stock and a different later day to sell it.
// Return the maximum profit you can achieve.
// If no profit is possible, return 0.

// Input:  prices = [7,1,5,3,6,4]
// Output: 5
// Explanation:
// Buy on day 1 (price = 1),
// Sell on day 4 (price = 6),
// Profit = 6 - 1 = 5.

// Input:  prices = [7,6,4,3,1]
// Output: 0
// Explanation: No transaction is profitable.


#include<iostream>
#include<map>

int main() {
    // std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    std::vector<int> prices = {7, 6, 4, 3, 1};
    int max_profit = 0;
    int min_price = INT_MAX;

    for (int x : prices) {
        if (x < min_price) {
            min_price = x;
        }
        if (x - min_price > max_profit) {
            max_profit = x - min_price;
        }
    }
    
    if(max_profit != 0) {
        std::cout << "Max profit: " << max_profit << std::endl;
    }
    else {
        std::cout << "No profitable transaction" << std::endl;
    }

    return 0;
}