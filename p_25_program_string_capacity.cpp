#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    s = "hello world";
    cout << s.size() << endl;
    s.resize(20, 'm');
    cout << s.size() << endl;
    cout << s << endl;
    s.clear();
    cout << s.size() << endl;
    cout << s << endl;

    return 0;
}