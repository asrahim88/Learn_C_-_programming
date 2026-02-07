#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long int> even;
    vector<long long int> odd;

    for(int i =0; i<N; i++){
        long long int x;
        cin >> x;
        if(x%2 == 0){
            even.push_back(x);
        }else{
            odd.push_back(x);
        }
    }
    long long int ans = -1;
    if(!even.empty()){
        sort(even.begin(), even.end());
        ans = even[even.size()-1];
    }
    if(even.size() >=2){
        sort(even.begin(), even.end());
        long long sum = even[even.size()-1] + even[even.size()-2];
        if(sum>ans){
            ans = sum;
        }
    }
    if(odd.size() >=2){
        sort(odd.begin(), odd.end());
        long long sum = odd[odd.size()-1] + odd[odd.size()-2];
        if(sum>ans){
            ans = sum;
        }
    }
    cout << ans << endl;
    return 0;
}


//     if (even.size() >= 2) {
//         sort(even.begin(), even.end());
//         long long sum = even[even.size()-1] + even[even.size()-2];
//         if (sum > ans) {
//             ans = sum;
//         }
//     }


//     if (odd.size() >= 2) {
//         sort(odd.begin(), odd.end());
//         ans = max(ans, odd[odd.size()-1] + odd[odd.size()-2]);

//         long long sum = odd[odd.size()-1] + odd[odd .size()-2];
//         if (sum > ans) {
//             ans = sum;
//         }
//     }

//     cout << ans << "\n";
//     return 0;
// }