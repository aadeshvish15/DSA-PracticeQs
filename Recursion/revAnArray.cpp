#include <bits\stdc++.h>
using namespace std;

// void revAnArray(int arr[], int i, int j)       //using two pointers
// {
//     if (i >= j)
//     {
//         return;
//     }
//     swap(arr[i], arr[j]);
//     revAnArray(arr, i + 1, j - 1);
// }

void revAnArray(int arr[], int i, int n) // using one pointer
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    revAnArray(arr, i + 1, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    revAnArray(arr, 0, n);
    for (int z = 0; z < n; z++)
    {
        cout << arr[z] << ",";
    }
}