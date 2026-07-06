#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a,b;
    cin >> a >> b;
    vector<int> v1(a);
    vector<int> v2(b);

    for(int i=0; i<a; i++){
        cin >> v1[i];
    }

    for(int i=0; i<b; i++){
        cin >> v2[i];
    }

    int count = 0;
    vector<int> ans;
    int l =0;
    int r = 0;
    int size = v2.size();
    while (true)
    {
        if(l<a && v1[l] < v2[r]){
            count++;
            l++;
        }else{
            ans.push_back(count);
            r++;
        }
        if(r == size){
            break;
        }
    }
    for(int x : ans){
        cout << x << " ";
    }
    
    return 0;
}