#include <iostream>

void quickSort(int arr[], int low, int high, bool ascending) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) {
            if ((ascending && arr[j] < pivot) || (!ascending && arr[j] > pivot)) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }

        std::swap(arr[i + 1], arr[high]);
        int pivotIdx = i + 1;

        quickSort(arr, low, pivotIdx - 1, ascending);
        quickSort(arr, pivotIdx + 1, high, ascending);
    }
}

int main() {
    int arr[] = {7, 6, 10, 5, 9, 2, 1, 15, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort in ascending order
    quickSort(arr, 0, n - 1, true);
    std::cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Sort in descending order
    quickSort(arr, 0, n - 1, false);
    std::cout << "Sorted array in descending order: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
