#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int array[n];

    for(long long int i=0; i<n; i++){
        cin >> array[i];
    }
   
    long long int count =0;
    for(long long int i=1; i<n;i++){
        if(array[i] < array[i-1]){
            count += array[i-1] - array[i];
            array[i] += array[i-1] - array[i];
        }
    }
    cout << count << endl;
    return 0;
}