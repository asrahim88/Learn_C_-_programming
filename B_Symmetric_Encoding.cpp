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

        map<char, int> mp;
        string unq= "";

        // get unq character
        for(int i=0; i<n; i++){
            if(mp[s[i]]==0){
                unq.push_back(s[i]);
                mp[s[i]]++;
            }
        }

        // sorting order
        sort(unq.begin(), unq.end());

        map<char,char> symmetry;
        int l=0;
        int r= unq.size()-1;

        while (l<=r)
        {
            symmetry[unq[l]] = unq[r];
            symmetry[unq[r]] = unq[l];

            l++;
            r--;
        }
        
        //replace with symmetry
        for(int i=0; i<n; i++){
            s[i] = symmetry[s[i]];
        }

        cout << s << endl;
    }
    

    return 0;
}