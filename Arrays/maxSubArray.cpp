#include <bits/stdc++.h>
using namespace std;


// brute force-     O(n^3)
// void maxSubArray(int arr[], int n)
// {
//     int maxSum = INT_MIN;
//     for (int st = 0; st < n; st++)
//     {
//         for (int end = st; end < n; end++)
//         {
//             int arrSum = 0;
//             for (int i = st; i <= end; i++)
//             {
//                 arrSum += arr[i];
//             }
//             cout << arrSum << ",";
//             maxSum = max(maxSum, arrSum);
//         }
//         cout << endl;
//     }
//     cout << "Mx sum is:" << maxSum;
// }

void maxSubArray(int arr[], int n)
{
  
}


// better approach-     O(n^2)
void maxSubArray1(int arr[], int n)
{
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int arrSum = 0;
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                arrSum += arr[i];
            }
            cout << arrSum << ",";
            maxSum = max(maxSum, arrSum);
        }
        cout << endl;
    }
    cout << "Mx sum is:" << maxSum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubArray(arr, n);
}