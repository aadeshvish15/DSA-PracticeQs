#include <bits/stdc++.h>
using namespace std;

// int factorial(int n, int result)    //  parametrised recurion method
// {
//     if (n < 2)
//     {
//         return result;
//     }

//     factorial(n - 1, result * n);
// }

int factorial1(int n) //  functional recurions method
{
    if (n < 2)
    {
        return 1;
    }
    return n * factorial1(n - 1);
}

int main()
{
    cout << factorial1(4);
}
