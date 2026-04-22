#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    string s;

    for(int i=0; i<n;i++){
        char chr;
        cin >> chr;
        s.push_back(chr);
    }
    cout << s << endl;
    cout << s.front() << endl;
    cout << s.back() << endl;
    cout << s.empty() << endl;
    s.pop_back();
    cout << s << endl;
    cout << s.size() << endl;
    cout<< s.substr(3) << endl;
    return 0;
}