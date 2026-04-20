#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, int> mp;
    mp[10] = 20;
    mp[2]= 54;
    mp[4] = 54;
    mp[1] = 10;

    for(auto [key, value] : mp){
        cout << key << " " << value << endl;
    }
    cout << "Again traverse" << endl;
    for(auto it : mp){
        int key = it.first;
        int value = it.second;
        cout << key << " " << value  << endl;
    }

    auto it = mp.find(20);
    if(it == mp.end()){
        cout << "not found" << endl;
    }else {
        cout << "found" << endl;
    }

    auto itT = mp.find(1);
    if(itT !=mp.end()){
        cout << itT->first << " = " << itT->second << endl;
    }else {
        cout << "Not found" << endl;
    }

    auto it3 = mp.find(1);

    if(it3 != mp.end()){
        mp.erase(1);
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    auto it4 = mp.find(1);
    if(it4 == mp.end()){
        cout << " Not found" << endl;
    }
    cout << mp.size() << endl;
    cout << mp.empty() << endl;
    auto data = mp.upper_bound(10);
    // cout << mp.lower_bound(2) << endl;
    cout << data->first << " = " << data->second << endl;

    for(auto [key, value] : mp){
        cout << key << " = " << value << endl;
    }

        auto data0 = mp.upper_bound(10);
    // cout << mp.lower_bound(2) << endl;
    cout << data0->first << " = " << data0->second << endl;
    mp.insert({12, 70});

    for(auto [key, value] : mp){
        cout << key << " = " << value << endl;
    }
    return 0;
}