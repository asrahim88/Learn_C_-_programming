#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l= {10,20,30};
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(50);
    for(int x : l){
        cout << x <<" " ;
    }
    cout << endl;
    l.pop_back();
    for(int x : l){
        cout << x << " ";
    }
    cout << endl;
    l.pop_front();
    for(int x : l){
        cout << x << " ";
    }
    list<int> l2 = {101,202,303,404,505,606};
    l.insert(next(l.begin(), 2), l2.begin(), l2.end());
    cout << endl;
    for(int x : l){
        cout << x << " ";
    }

    return 0;
}