#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int i;
        for(i=1; i<n; i++){
            if(s[i-1] > s[i])
            {
                break;
            }
        }
        for(int j=0; j<i; j++){
            cout << s[j];
        }
        string temp;
        for(int j=i; j<n; j++){
            temp.push_back(s[j]);
        }
        sort(temp.begin(), temp.end());
        for(int i=0; i<temp.size(); i++){
            cout << temp[i];
        }
        cout << endl;
    }
    return 0;
}