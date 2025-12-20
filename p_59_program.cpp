#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5,6};
    cout << v.size() << endl;
    cout << v.empty() << endl;
    v.insert(v.end(), 100);
    v.insert(v.begin(), 200);
    for(int x: v) {
        cout << x << " ";
    }
    vector<int> v2 = {90,80,70};
    cout << endl;
    v2.insert(v2.begin(), v.begin(), v.end());
    v2.insert(v2.end(), v.begin(), v.end());
    for(int x: v2){
        cout << x << " ";
    }
    cout << endl;
    replace(v2.begin(), v2.end(), 3, 3000);
    for(int x: v2){
        cout << x << " ";
    }
    cout << endl;
    auto it = find(v2.begin(), v2.end(), 500);
    if(it== v2.end()){
        cout << "not found";
    }else {
        cout << "Found";
    }
    cout << endl;
    auto em = find(v2.begin(), v2.end(), 4);
    if(em == v2.end()) {
        cout << "not found\n";
    }else {
        cout << "Found\n";
    }
    return 0;
}