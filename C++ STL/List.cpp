#include <bits/stdc++.h> //all the lib here use this header file
using namespace std;

void listExample() 
{
  list<int> l;
  l.push_back(10);
  l.emplace_back(20);

  for (const auto &elem : l)
  {
    cout << elem << " ";
  }
  cout << endl;
}

int main()
{

    listExample();
    return 0;
}