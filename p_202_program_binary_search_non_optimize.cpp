#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];
    

    int key;
    cin >> key;

    int l=0;
    int r=n-1;

    int flag= 0;
    while(l<=r){
        int mid = (l+r)/2;

        if(key < v[mid])
            r = mid-1;
        else if(key > v[mid])
            l = mid+1;
        else{
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;
    return 0;
}