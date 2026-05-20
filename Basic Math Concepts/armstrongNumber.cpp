#include <bits/stdc++.h>
using namespace std;
int armstrongNumber(int n)
{
    int sum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    }

    if(sum == n)
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
    int result = armstrongNumber(n);
    
    return 0;
}
