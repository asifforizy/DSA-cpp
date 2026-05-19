#include <bits/stdc++.h> //all the lib here use this header file
using namespace std;

void stackExample()
{
    stack<int> s;
    s.push(10);
    s.push(6);
    s.push(20);
    s.push(30);
    s.push(1);
    s.emplace(20);

    cout << "Top element: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl;
    cout << "Is stack empty: " << s.empty() << endl;
   
}

int main()
{

    stackExample();
    return 0;
}