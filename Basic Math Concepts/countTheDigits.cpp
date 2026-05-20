#include <bits/stdc++.h>
using namespace std;
int countTheDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        count++;
        n = n / 10;
    }
    return count;
}

int main()
{
    int n;

    cin >> n;
    int result = countTheDigits(n);
    cout << "Number of digits: " << result << endl;
    return 0;
}
