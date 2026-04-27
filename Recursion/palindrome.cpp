#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i)
{
    if (i >= str.size() / 2)
    {
        return true;
    }
    else if (str[i] != str[str.size() - i - 1])
    {
        return false;
    }
    return checkPalindrome(str, i + 1);
}

int main()
{
    string str = "madam";
    cout << checkPalindrome(str, 0);
    return 0;
}