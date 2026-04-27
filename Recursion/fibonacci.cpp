#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    int last = fibonacci(n - 1);
    int slast = fibonacci(n - 2);

    return last + slast;
}

int main()
{
    cout << fibonacci(7);
    return 0;
}

// 0 1 1 2 3 5 8 13 21