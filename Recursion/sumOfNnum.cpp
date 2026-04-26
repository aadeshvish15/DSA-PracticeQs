#include <bits/stdc++.h>
using namespace std;

// int sumOfNnum(int n)         //  functional recurions method
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n + sumOfNnum(n - 1);
//     }
// }

int sumOfNnum1(int n, int sum) //  parametrised recurion method
{
    if (n < 1)
    {
        return sum;
    }
    sumOfNnum1(n - 1, sum + n);
}

int main()
{
    cout << sumOfNnum1(3, 0);
}

// 5+sumOfNnum(4)=15
// 4+sumOfNnum(3)=10
// 3+sumOfNnum(2)=6
// 2+sumOfNnum(1)=3  g++ sumOfNnum.cpp
// 1