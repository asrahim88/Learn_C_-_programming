#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;
        
        int aray[n];
        for(int i =0; i<n; i++){
            cin >> aray[i];
        }
        sort(aray, aray+n);
        int mn = aray[0];
        int mx = aray[n-1];

        

        if(mn%2== mx%2){
            cout << 0 << endl;
        }else {
            int count = 0;
            int i = 0;
            while (aray[i]%2 != mx%2)
            {
                i++;
                count++;
            }
            int count2 = 0;
            int j=n-1;
            while (aray[j]%2 !=mn%2)
            {
                j--;
                count2++;
            }
            if(count<count2){
                cout << count << endl;
            }else{
                cout << count2 << endl;
            }
        }
    }
    return 0;
}