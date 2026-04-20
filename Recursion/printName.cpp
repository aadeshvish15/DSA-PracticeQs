#include <bits/stdc++.h>
using namespace std;

void printName(string name, int n)
{
    if (n < 1)
    {
        return;
    }
    cout << name << endl;

    printName(name, n - 1);
}

void linearlyNum(int num, int n)
{
    if (num > n)
    {
        return;
    }

    cout << num << endl;

    linearlyNum(num + 1, n);
}
// 👆using backtracking for linearlyNum
void linearlyNumUsingBacktrack(int num, int n)
{
    if (num < 1)
    {
        return;
    }

    linearlyNumUsingBacktrack(num - 1, n);
    cout << num << endl;
}

void DescendingNum(int n)
{
    if (n < 1)
    {
        return;
    }

    cout << n << endl;

    DescendingNum(n - 1);
}
// 👆using backtracking for DescendingNumUsingBacktrack

void DescendingNumUsingBacktrack(int n, int targetNum)
{
    if (n > targetNum)
    {
        return;
    }

    DescendingNumUsingBacktrack(n + 1, targetNum);
    cout << n << endl;
}

int main()
{
    // linearlyNum(1, 10);
    // linearlyNumUsingBacktrack(5, 5);
    // DescendingNum(10);
    DescendingNumUsingBacktrack(1, 5);
    // printName("Aadesh", 5);
}
