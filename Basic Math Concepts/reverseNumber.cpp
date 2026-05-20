#include <bits/stdc++.h>
using namespace std;
int reverseNumber(int n)
{
    int reversed = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n = n / 10;
    }
    return reversed;
}

int main()
{
    int n;

    cin >> n;
    int result = reverseNumber(n);
    cout  << result << endl;
    return 0;
}
