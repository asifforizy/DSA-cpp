#include <bits/stdc++.h> //all the lib here use this header file
using namespace std;

void queueExample()
{
    queue<int> q;
    q.push(10);
    q.push(6);
    q.push(20);
    q.push(30);
    q.push(1);
    q.emplace(20);

    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    cout << "Size of queue: " << q.size() << endl;
    cout << "Is queue empty: " << q.empty() << endl;

}

int main()
{

    queueExample();
    return 0;
}