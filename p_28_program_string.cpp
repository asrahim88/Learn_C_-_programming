#include <bits/stdc++.h>
using namespace std;

int main() {
    // string s = "Hello world";
    // cout << s.size() << endl;

    // string s ;
    // getline(cin, s);
    // cout << s << endl;

    // string s = "hello world";
    // string s("hello ");
    // cout << s << endl;

    string s = "hello world";
    string t(s, 3);
    cout << t.size() << endl;
    cout << t << endl;

    string s(10, 'B');
    cout << s.size() << endl;
    cout << s << endl;
    return 0;
}