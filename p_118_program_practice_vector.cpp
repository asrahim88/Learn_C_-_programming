#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> v = {10,20,30,40,50,60,70,80,90,100};
    // cout << v.size()<< endl;
    // vector<int> v;
    // cout << v.size() << endl;

    // vector<int> v(10);
    // cout << v.size() << endl;

    // vector<int> v(10);
    // for(int i =0; i<v.size(); i++){
    //     cout << v[i] << endl;
    // }

    // vector<int> v(10, 5);
    // for(int i =0; i<v.size(); i++){
    //     cout << v[i] << " ";
    // }

    vector<int> v = {1,2,3,4,5};
    cout << v.size() <<endl;
    for(int num : v){
        cout << num << " ";
    }
    cout << endl;
    v.insert(v.begin()+2, 200);
    for(int num : v){
        cout << num << " ";
    }
    cout << endl;
    v.erase(v.begin()+3, v.begin()+5);
    for(int num : v){
        cout << num << " ";
    }
    replace(v.begin(), v.end(), 200, 500);
    cout << endl;
    for(int num : v){
        cout << num << " ";
    }
    auto it = find(v.begin(), v.end(), 1000);
    cout << "\n" << *it << "\n";
    if(it == v.end()){
        cout << "\n nai"; 
    }else {
        cout << "\n ache";
    }
    return 0;
}