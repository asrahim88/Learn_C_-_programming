#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    vector<int> v2 = {100,200,300};

    v.insert(v.begin()+1, v2.begin(), v2.end());
    
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;
    for(int x : v2){
        cout << x << " ";
    }
    cout << endl ;
    v2.insert(v2.begin()+2, v.begin(), v.end());
    for(int x : v2){
        cout << x << " ";
    }
    v2.erase(v2.begin()+2, v2.end()-2);
    cout << endl ;
    for(int x : v2){
        cout << x << " ";
    }
    return 0;
}