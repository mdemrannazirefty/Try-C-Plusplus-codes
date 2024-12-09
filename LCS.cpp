#include <iostream>
using namespace std;

int main() {
    int A1[] = {2, 1, 7, 3, 5, 4, 8, 9, 3, 6};
    int Profits[] = {1, 3, 5, 2, 4, 3, 6, 7, 8, 9};
    int m = 10, n = 10;
    int table[m + 1][n + 1];

    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 || j == 0) {
                table[i][j] = 0;
            } else if (A1[i - 1] == Profits[j - 1]) {
                table[i][j] = table[i - 1][j - 1] + 1;
            } else {
                table[i][j] = max(table[i - 1][j], table[i][j - 1]);
            }
        }
    }

    int i = m, j = n;
    int lcs[table[m][n]];
    int index = table[m][n] - 1;

    while (i > 0 && j > 0) {
        if (A1[i - 1] == Profits[j - 1]) {
            lcs[index] = A1[i - 1];
            i--;
            j--;
            index--;
        } else if (table[i - 1][j] > table[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    cout << "LCS Table:" <<endl;
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            cout<<table[i][j] << " ";
        }
        cout<<endl;
    }

    cout<<"The Longest Common Subsequence is: ";
    for (int k = 0; k < table[m][n]; ++k) {
        cout<< lcs[k] <<" ";
    }
    cout<<endl;

    return 0;
}
