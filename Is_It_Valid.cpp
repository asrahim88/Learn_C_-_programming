#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--){
        string S;
        cin >> S;

        stack<char> stk;

        for(char chr : S){
            if(!stk.empty() && stk.top() != chr){
                stk.pop();
            }else{
                stk.push(chr);
            }
        }

        if(stk.empty()){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        stack<char> st;

        for (char c : s) {
            if (!st.empty() && st.top() != c) {
                st.pop();
            } else {
                st.push(c);
            }
        }

        if (st.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
*/
/*#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        stack<char> stk;
        for(char chr : s){
            stk.push(chr);
        }

        for (char c : s) {
            if (!stk.empty()) {
                char top = stk.top();
                if ((top == '0' && c == '1') || (top == '1' && c == '0')) {
                    stk.pop();
                } 
            } 
        }

        if (stk.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}*/