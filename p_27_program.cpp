#include <bits/stdc++.h>
using namespace std;

int main() {



    string s1 = "hello";
    string s2 = "gello";

    if(s1 == s2) {
        cout << "same" << endl;
    }else {
        cout << "not same" << endl;
    }

    cout << s1.size() << endl;
    cout << s1.max_size() << endl;
    cout << s1.capacity() << endl;
    s1.clear();
    
    cout << s1 << endl;

    if(s1.empty()) {
        cout << "Empty" << endl;
    }else {
        cout << "Not empty" <<endl;
    }
    cout << s1.size() <<endl;
    s1.resize(50);
    cout << s1.size() <<endl;

    s1 = "Hello world";
    cout << s1 <<endl;
    cout << s1.size() << endl;

    for(int i=0; i<s1.size(); i++) {
        cout << s1[i] << " " ;
    }
    cout << endl;
    for(int i = 0; i<s1.size(); i++) {
        cout << s1.at(i) << " ";
    }
    cout << endl;

    cout << s1.back() <<endl;
    cout << s1.at(s1.size()-1) << endl;
    cout << s1[s1.size()-1] << endl;

    cout << s1.front() << endl;
    cout << s1[0] << endl;
    cout << s1.at(0) << endl;

    s1 += s2;
    cout << s1 << endl;   
    s1.append(" Hehehehehhehhehhe");
    cout << s1 << endl;   
    s1.push_back('1');
    cout << s1 << endl;
    s1.push_back('A');
    cout << s1 << endl;
    s1.pop_back();
    cout << s1 << endl;
    s1.assign("new string add");
    cout << s1 << endl;
    s1 = "abar change";
    cout << s1 << endl;
    s1.erase(2);
    cout << s1 << endl;
    s1.assign("Hello World");
    cout << s1 << endl;
    s1.erase(1, 3);
    cout << s1 << endl;
    s1.replace(3,0,"Bangladesh");
    cout << s1 << endl;
    s1.insert(13, " again bangladesh ");
    cout << s1 << endl;
    cout << *s1.begin() << endl;
    cout << *(s1.end()-1) << endl;

    for( auto it = s1.begin(); it<s1.end(); it++) {
        cout << *it <<" " ;
    }

    cout << endl;
    for(auto it = s1.begin(); it < s1.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;
    for(auto it = s1.begin(); it<s1.end(); it++) {
        cout << *it << " ";
    }

    getline(cin, s1);
    return 0;
}