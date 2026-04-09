#include <bits/stdc++.h>
using namespace std;

int main() {
   cout << "Enter the vector size: " ;

    int n;
    cin >> n;
// step 1
    // vector<int> v;
    // for(int i=0; i<n; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x) ;
    // }
// step 2
    // vector<int> v(n);
    // for(int i =0; i<n ; i++){
    //     cin >> v[i];
    // }

    // for(int i : v){
    //     cout << i << " ";
    // }

    vector<string> v(n);
    cin.ignore();
    for(int i =0; i<n; i++){
        getline(cin, v[i]);
    }

    cout << "Enter the searching: "<
    string key;
    cin.ignore();
    getline(cin, key);

    cout << key << endl;

    return 0;
}