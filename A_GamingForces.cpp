#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int array[n];
        for(int i=0; i<n ;i++){
            cin >> array[i];
        }
        int count1 = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(array[i] != 1){
                count++;
            }
            if(array[i] == 1)
                count1++;
        }
        
        if(count1 % 2 ==0){
            count += count1 / 2; 
        }else{
            count += count1/2;
            count+=1;
        }
        cout << count << endl;
    }
    return 0;
}