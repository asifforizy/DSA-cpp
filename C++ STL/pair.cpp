#include <bits/stdc++.h> //all the lib here use this header file
using namespace std;

void pairExample() 
{
    pair <int, string> p1 = {1, "Hello"}; 


    cout << "First element: " << p1.first << endl;   
    cout << "Second element: " << p1.second << endl; 

    pair <int, string> p2; 
    p2.first = 2;
    p2.second = "World";

    cout << "First element: " << p2.first << endl;   
    cout << "Second element: " << p2.second << endl; 


    pair< int , pair <string, double> > p3 = {3, {"Nested Pair", 3.14}};
    cout << "First element: " << p3.first << endl;
    cout << "Second element: " << p3.second.first << endl;
    cout << "Third element: " << p3.second.second << endl;


    pair <int , int > arr[] = { {1, 2}, {3, 4}, {5, 6} };
    for (int i = 0; i < 3; i++) {
        cout << "Pair " << i + 1 << ": (" << arr[i].first << ", " << arr[i].second << ")" << endl;
    }
}

int main()
{

    pairExample();
    return 0;
}