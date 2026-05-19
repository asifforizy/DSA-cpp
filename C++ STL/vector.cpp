#include <bits/stdc++.h> //all the lib here use this header file
using namespace std;

void vectorExample()
{
    vector<int> v;
    v.push_back(10);
    v.emplace_back(20);

    vector<pair<int, string>> vp;
    vp.push_back({1, "Hello"});
    vp.emplace_back(2, "World");

    for (const auto &p : vp)
    {
        cout << "First element: " << p.first << ", Second element: " << p.second << endl;
    }

    vector<int> v2(5, 100); // vector of size 5 with all elements initialized to 100
    cout << "Elements in v2: ";
    for (const auto &elem : v2)
    {
        cout << elem << " ";
    }
    cout << endl;



    vector<int> v3(4,5);
    vector<int> v4(v3);  //this is copy of v3

    // accessing elements
    cout << v3[0] << endl;
    cout << v3[1] << endl;
    cout << v3[2] << endl;
    cout << v3[3] << endl;

    // deletion of vector
    v3.erase(v3.begin() + 1); //deleting element at index 1
    
    // insert element 
    v3.insert(v3.begin() + 1, 10); //inserting 10 at index 

    

}

int main()
{

    vectorExample();
    return 0;
}