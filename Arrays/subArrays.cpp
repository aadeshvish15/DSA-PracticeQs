#include <bits/stdc++.h>
using namespace std;

void printSubarray(int arr[], int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            // cout << "(" << arr[i] << "," << arr[j] << ")";
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << ",";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    // cout << n;
    printSubarray(arr, n);
}