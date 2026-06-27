#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

/*
========================================================================
LeetCode 121: Best Time to Buy and Sell Stock
========================================================================
Problem Statement:
You are given an array 'prices' where prices[i] is the price of a given
stock on the i-th day.

You want to maximize your profit by choosing a single day to buy one stock
and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction.
If you cannot achieve any profit, return 0.

Constraints:
- 1 <= prices.length <= 10^5
- 0 <= prices[i] <= 10^4
========================================================================
*/

int maxProfit(vector<int>& prices) {
    // TODO: Implement your solution here

    int buy = INT_MAX;
    int n = prices.size();
    int maxProfit = 0;

    for(int i = 0;i<n;i++)
    {
        if(buy > prices[i])
        {
            buy = prices[i];
        }
        else
        {
            int profit = prices[i] - buy;
            if(maxProfit < profit)
            {
                maxProfit = profit;
            }
        }
    }

    if(maxProfit > 0)
    {
        return maxProfit;
    }
    return 0;
}

int main() {
    // Test Case 1
    // Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6 - 1 = 5.
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "Test Case 1: " << (maxProfit(prices1) == 5 ? "PASSED ✅" : "FAILED ❌")
         << " (Expected: 5, Got: " << maxProfit(prices1) << ")" << endl;

    // Test Case 2
    // In this case, no transactions are done and max profit = 0.
    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Test Case 2: " << (maxProfit(prices2) == 0 ? "PASSED ✅" : "FAILED ❌")
         << " (Expected: 0, Got: " << maxProfit(prices2) << ")" << endl;

    return 0;
}
