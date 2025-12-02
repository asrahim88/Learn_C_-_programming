#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, X;
    getline(cin, S);
    cin >> X;

    int countWord = 0;
    stringstream sentence(S);
    string word;
    int count = 0;
    while (sentence >> word)
    {
        if(word == X)
        {
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}