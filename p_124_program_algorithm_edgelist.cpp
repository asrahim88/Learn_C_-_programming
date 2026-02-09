#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , e;
    cin >> n >> e;

    vector<pair<int,int>> edgeList;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edgeList.push_back({a,b});
    }

    for(auto p : edgeList){
        cout << p.first << " " << p.second << " " << endl;
    }
    
    return 0;
}