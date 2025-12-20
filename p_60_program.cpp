#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i =0; i<n; i++) {
        cin >> v[i];
    }
    for(int x: v) {
        cout << x << " ";
    }

    cout << endl;
    cout << "Please enter another vector size: ";
    int m;
    cin >> m;

    vector<int> v2;

    for(int i =0; i<m; i++) {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    for(int x: v2) {
        cout << x << " ";
    }
    return 0;
}