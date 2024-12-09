#include <iostream>
using namespace std;

int main() {
    int weights[] = {3, 1, 4, 2, 9, 4, 3};
    int profits[] = {12, 5, 16, 7, 9, 11, 6};
    int totalWeight = 15;
    int n = 7;

    double ratios[n];
    cout<<"Ratios (P/W)= ";

    for (int i = 0; i < n; ++i) {
        ratios[i] = (double)profits[i] / weights[i];
            cout<<" "<<ratios[i];
    }
    cout<<endl;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (ratios[i] < ratios[j]) {
                double tempRatio = ratios[i];
                ratios[i] = ratios[j];
                ratios[j] = tempRatio;

                int tempWeight = weights[i];
                weights[i] = weights[j];
                weights[j] = tempWeight;

                int tempProfit = profits[i];
                profits[i] = profits[j];
                profits[j] = tempProfit;
            }
        }
    }
    int maxValue = 0;
    for (int i = 0; i < n; ++i) {
        if (totalWeight > 0 && weights[i] <= totalWeight) {
            maxValue += profits[i];
            totalWeight -= weights[i];
        } else {
            double fraction = (double)totalWeight / weights[i];
            maxValue += profits[i] * fraction;
            totalWeight = 0;
        }
    }

    cout << "Maximum total Profits: " << maxValue;
     cout<<endl;

    return 0;
}
