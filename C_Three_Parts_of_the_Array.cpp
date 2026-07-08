#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> v(n);

    for(int i =0; i<n; i++)
        cin >> v[i];
    

    int l = 0;
    int r = n-1;

    long long lSum = 0;
    long long rSum = 0;


    long long finalSum = 0;
    while (l <=r ){
        if(lSum <= rSum){
            lSum += v[l++];
        }else {
            rSum += v[r--];
        }

        if(lSum == rSum)
            finalSum = lSum;
    }
    
    cout << finalSum << endl;
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0;
    int r = n - 1;

    long long left = 0;
    long long right = 0;
    long long ans = 0;

    while(l <= r) {

        if(left <= right) {
            left += a[l++];
        }
        else {
            right += a[r--];
        }

        if(left == right)
            ans = left;
    }

    cout << ans << '\n';
}
*/
// #include<bits/stdc++.h>
// using namespace std;
 
// int main() {
// 	ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
// 	int n;
//     cin >> n;
    
//     vector<long long int> v(n);
//     for(int i =0; i<n; i++) 
//     	cin >> v[i];
    
//     int i =0;
//     int j = n-1;
    
//     long long lSum = v[i];
//     long long rSum = v[j];
    
//     long long finalSum = 0;  
    
//     while(i < j) {
//     	if (lSum == rSum) {
//         	finalSum = lSum;
            
//             i++;
//             j--;
            
//             if(i < j) {
//             	lSum += v[i];
//                 rSum += v[j];
//             }
//         } else if(lSum < rSum) {
//         	i++;
//             if(i<=j)
//                 lSum += v[i];

//         }else {
//         	j--;
//             if(i <= j)
//                 rSum += v[i];
//         }
//     }
//     cout << finalSum << endl;
// 	return 0;
// }