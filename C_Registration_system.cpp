#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> username(n);
    for(int i = 0; i < n; i++){
        cin >> username[i];
    }

    map<string,int> mp;

    for(int i = 0; i < n; i++){
        if(mp[username[i]] == 0){
            cout << "OK" << endl;
            mp[username[i]] = 1;
        } else {
            string new_name;
            int counter = mp[username[i]];

            while(mp[username[i] + to_string(counter)] != 0){
                counter++;
            }

            new_name = username[i] + to_string(counter);
            cout << new_name << endl;
        }
    }

    return 0;
}