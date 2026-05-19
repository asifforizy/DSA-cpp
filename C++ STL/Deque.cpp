#include <bits/stdc++.h> //all the lib here use this header file
using namespace std;

void deQueExample() 
{
  deque<int> d;
  d.push_back(10);
  d.emplace_back(20);

  for (const auto &elem : d )
  {
    cout << elem << " ";
  }
  cout << endl;
}

int main()
{

    deQueExample();
    return 0;
}