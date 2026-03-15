#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<long long int> height(100005);
        for(int i=0; i<n; i++){
            cin >> height[i];
        }

        long long int mx1 = -1;
        long long int mx2 =  -1;

        long long int idx1 = -1;
        long long int idx2 = -1;
        for(int i=0; i<n; i++){
            if(height[i] > mx1) {
                mx2 = mx1;
                idx2 = idx1;
                mx1 = height[i];
                idx1 = i;
            }else if(height[i] > mx2){
                mx2 = height[i];
                idx2 = i;
            }
        }
        int left = min(idx1, idx2);
        int right = max(idx1, idx2);

        cout << left << " " << right << endl;
    }
}