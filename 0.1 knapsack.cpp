#include <iostream>
using namespace std;

int main() {
    int weights[] = {1, 3, 4, 5};
    int profits[] = {1, 4, 5, 7};
    int n = 4;
    int total_weight = 7;

    int table[n + 1][total_weight + 1];
    for (int i = 0; i <= n; ++i) {
        for (int w = 0; w <= total_weight; ++w) {
            if (i == 0 || w == 0) {
                table[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                table[i][w] = max(profits[i - 1] + table[i - 1][w - weights[i - 1]], table[i - 1][w]);
            } else {
                table[i][w] = table[i - 1][w];
            }
        }
    }
    cout << "Table:" << endl;
    for (int i = 0; i <= n; ++i) {
        for (int w = 0; w <= total_weight; ++w) {
            cout << table[i][w] << " ";
        }
        cout << endl;
    }
    int max_profit = table[n][total_weight];
    cout << "Maximum Profit: " << max_profit << endl;
    return 0;
}
