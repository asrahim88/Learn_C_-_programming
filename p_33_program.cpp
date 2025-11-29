#include <bits/stdc++.h>
using namespace std;

int main() {
    string name = "hello world";
    // getline(cin, name);

    // for(auto it= name.begin(); it<name.end(); it++) {
    //     cout << *it << endl;
    // }

    cout << name.size() << endl;
    cout << name << endl;
    cout << name.erase(5,1) << endl;
    cout << name << endl;
    cout << name.size() << endl;
    return 0;
}