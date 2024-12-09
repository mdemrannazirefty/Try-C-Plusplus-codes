#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 3, 1, 5, 7, 9, 6, 9, 0, 4, 3, 0, 2, 8, 8, 9, 3, 4, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    int range = max - min + 1;
    int count[range] = {0};

    for (int i = 0; i < n; i++)
        {
            count[arr[i] - min]++;
        }

    int sortedArr[n];
    int index = 0;
    for (int i = 0; i < range; i++)
    {
        while (count[i] > 0)
        {
            sortedArr[index] = i + min;
            count[i]--;
            index++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = sortedArr[i];
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl;
    return 0;
}
