#include <bits/stdc++.h>
using namespace std;

int maxProfit(int price[], int start, int end) {
    // If the subarray is invalid or has only one element, no profit can be made
    if (end <= start)
        return 0;

    int profit = 0;

    // Traverse through every possible buy and sell point
    for (int i = start; i < end; i++) {
        for (int j = i + 1; j <= end; j++) {
            // If buying at i and selling at j is profitable
            if (price[j] > price[i]) {
                // Calculate the current profit
                int curr_profit = price[j] - price[i]
                                  + maxProfit(price, start, i - 1)
                                  + maxProfit(price, j + 1, end);

                // Update the maximum profit
                profit = max(profit, curr_profit);
            }
        }
    }

    return profit;
}

int main() {
    int price[] = {1, 5, 3, 8, 12};
    int n = sizeof(price) / sizeof(price[0]);
    cout << "Maximum profit: " << maxProfit(price, 0, n - 1) << endl;
    return 0;
}

