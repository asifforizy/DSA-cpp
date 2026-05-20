#include <bits/stdc++.h>
using namespace std;
int palindrome(int n)
{
    int reversed = 0;
    int original = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n = n / 10;
    }

    if(reversed == original)
    {
       cout << "true" << endl;
    }
    else
    {
         cout << "false" << endl;
    }

    
}

int main()
{
    int n;

    cin >> n;
    int result = palindrome(n);
    
    return 0;
}
