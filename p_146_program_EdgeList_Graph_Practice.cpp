#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    vector<pair<int,int>> edgeList;

    while(e--){
        int a, b;
        cin >> a >> b;
        edgeList.push_back({a,b});
    }
    cout << "output" << endl;
    for(pair<int,int> child: edgeList){
        cout << child.first << " "<< child.second << endl;
    }
    return 0;
}