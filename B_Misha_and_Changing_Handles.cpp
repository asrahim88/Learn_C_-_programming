#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    map<string,string> oldHandle, newHandle;

    for(int i=1; i<=n; i++){
        string a, b;
        cin >> a >> b;

        if(newHandle.find(a) != newHandle.end()){
            string s = newHandle[a];
            oldHandle[s] = b;
            newHandle.erase(a);
            newHandle[b] = s;
        }else {
            oldHandle[a] = b;
            newHandle[b] = a;
        }
    }
    cout << oldHandle.size() << endl;
    for(auto [key, value ]: oldHandle){
        cout << key << " " << value << endl;
    }

    return 0;
}