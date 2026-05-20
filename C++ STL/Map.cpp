#include<bits/stdc++.h>
using namespace std;
void MapExample()
{
    map<int, string> m;
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";
    m[5] = "five";

    cout << "Size of map: " << m.size() << endl;
    cout << "Is map empty: " << m.empty() << endl;

    for (const auto &elem : m)
    {
        cout << elem.first << ": " << elem.second << endl;
    }
}

int main()
{

    MapExample();
    return 0;
}
