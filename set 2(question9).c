#include <stdio.h>

int maxProfit(int prices[], int n) {
    if (n == 0) return 0;

    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i]; 
        } else {
            int profit = prices[i] - min_price; 
            if (profit > max_profit) {
                max_profit = profit; 
            }
        }
    }

    return max_profit; 
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    printf("%d\n", maxProfit(prices, n)); 
    return 0;
}
