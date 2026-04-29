#include <bits/stdc++.h>
using namespace std;

void segregate0and1(int arr[], int n) // can be solved using two pointers
{
    int zeros = 0, ones = 0;
    for (int i = 0; i < n; i++)
    {
        (arr[i] == 0) ? (zeros++) : (ones++);
    }
    for (int i = 0; i < n; i++)
    {
        if (zeros > 0)
        {
            arr[i] = 0;
            zeros--;
        }
        else
        {
            arr[i] = 1;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int n = sizeof(arr) / sizeof(int);
    segregate0and1(arr, n);
    for (int z = 0; z < n; z++)
    {
        cout << arr[z] << ",";
    }
}