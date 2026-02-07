#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    stringstream sentence(S);
    string word;

    int count = 0;
    while(sentence >> word) {
        if(word == "Jessica")
        {
            count++;
        }
    }
    if(count > 0) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    return 0;
}