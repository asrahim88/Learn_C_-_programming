#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5,6};
    vector<int> v2 = v;
    for(int i =0; i<v2.size();i ++){
        cout << v2[i] << " ";
    }
    v2.push_back(500);
    cout << endl;
    for(int i =0; i<v2.size();i ++){
        cout << v2[i] << " ";
    }
    v2.insert(v2.begin(), 600);
    cout << endl;
    for(int i =0; i<v2.size();i ++){
        cout << v2[i] << " ";
    }
    v2.insert(v2.begin(), v.begin(), v.end());
    cout << endl;
    for(int i =0; i<v2.size();i ++){
        cout << v2[i] << " ";
    }
    v2.insert(v2.begin()+9, v.begin(), v.end());
    cout << endl;
    for(int i =0; i<v2.size();i ++){
        cout << v2[i] << " ";
    }
    v2.insert(v2.end()-1, v.begin(), v.end());
    cout << endl;
    for(int i =0; i<v2.size();i ++){
        cout << v2[i] << " ";
    }
    
    v2.erase(v2.begin()+1);
    v2.erase(v2.begin()+1, v2.end()-1);
    cout << endl;
    for(int i =0; i<v2.size();i ++){
        cout << v2[i] << " ";
    }
    return 0;
}