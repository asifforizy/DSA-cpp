#include<bits/stdc++.h>
using namespace std;
void setExample()
{
    set<int> s;
    s.insert(10);
    s.insert(6);
    s.insert(20);
    s.insert(30);
    s.insert(1);
    s.emplace(20);

    cout << "Size of set: " << s.size() << endl;
    cout << "Is set empty: " << s.empty() << endl;

    for (const auto &elem : s)
    {
        cout << elem << " ";
    }

}

int main()
{

    setExample();
    return 0;
}
