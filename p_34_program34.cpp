#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    cout << text << endl;

    int count = 0;

    stringstream individualWord(text);
    string text2;
    while(individualWord >> text2) {
        count++;
    }
    cout << count << endl;
    int length = text.size();

    int flag = 0;
    for(int i =0; i<length; i++) {
        if(text[i] == ' '){
            cout << endl;
            flag++;
        }else {
            cout << text[i];
        }
    }
    cout << endl;
    cout << flag << endl;

    cout << "again print all the word using stringstream" << endl;

    stringstream ss(text);
    string word;

    while( ss>> word) {
        cout << word << endl;
    }
    return 0;
}