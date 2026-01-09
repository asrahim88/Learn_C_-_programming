#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {10,20,30,4,10,20,30,50,70,80,40,60,20,30,50};
    l.unique();
    for(int i : l){
        cout << i << " ";
    }
    cout << endl;
    // l.sort();
    for(int i : l){
        cout << i << " ";
    }
    cout << endl;
    l.unique();
    for(int i : l){
        cout << i << " ";
    }
    l.remove(10);
    cout << endl;
    l.unique();
    for(int i : l){
        cout << i << " ";
    }
    l.remove(20);
    cout << endl;
    l.unique();
    for(int i : l){
        cout << i << " ";
    }
    l.reverse();
    cout << endl;
    for(int i : l){
        cout << i << " ";
    }
    l.sort(greater<int>());
    cout << endl;
    for(int i : l){
        cout << i << " ";
    }
    return 0;
}