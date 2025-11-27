#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s << endl;
    cout << s.size() << endl;
    s.resize(20, 'm');
    cout << s << endl;
    cout << s.front() << endl;
    cout << s[0] << endl;
    cout << s.back() << endl;
    cout << s[s.size()-1] << endl;
    cout << s.at(4) << endl;
    cout << s.at(s.size()-1) << endl;
    s.clear();
    cout << s.size() << endl;
    s = "gello";
    cout << s.empty() << endl;
    return 0;
}