#include <iostream>
using namespace std;

void quickSortAscending(int arr[], int left, int right) {
    if (left < right) {
        int i = left;
        int j = right;
        int pivot = arr[(left + right) / 2];

        while (i <= j) {
            while (arr[i] < pivot) i++;
            while (arr[j] > pivot) j--;
            if (i <= j) {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
        if (left < j) quickSortAscending(arr, left, j);
        if (i < right) quickSortAscending(arr, i, right);
    }
}
void quickSortDescending(int arr[], int left, int right) {
    if (left < right) {
        int i = left;
        int j = right;
        int pivot = arr[(left + right) / 2];

        while (i <= j) {
            while (arr[i] > pivot) i++;
            while (arr[j] < pivot) j--;
            if (i <= j) {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
        if (left < j) quickSortDescending(arr, left, j);
        if (i < right) quickSortDescending(arr, i, right);
    }
}
int main() {
    int arr[] = {7, 6, 10, 5, 9, 2, 1, 15, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSortAscending(arr, 0, n - 1);
    cout << "Ascending Order Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;

    quickSortDescending(arr, 0, n - 1);
    cout << "Descending Order Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
