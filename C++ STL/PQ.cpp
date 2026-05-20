#include <bits/stdc++.h> //all the lib here use this header file
using namespace std;

void PQExample()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(6);
    pq.push(20);
    pq.push(30);
    pq.push(1);
    pq.emplace(20);

    cout << "Top element: " << pq.top() << endl;
    cout << "Size of priority queue: " << pq.size() << endl;
    cout << "Is priority queue empty: " << pq.empty() << endl;

}

int main()
{

    PQExample();
    return 0;
}