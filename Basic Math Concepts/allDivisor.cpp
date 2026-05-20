#include <bits/stdc++.h>
using namespace std;


int allDivisor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}




int main()
{
    int n;

    cin >> n;
    int result = allDivisor(n);
    
    return 0;
}
