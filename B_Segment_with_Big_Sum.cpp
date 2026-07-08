#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;
    vector<int> v(n);

    for(int i=0; i<n ;i++)
        cin >>v[i];
    
    int l = 0, r =0;
    long long sum = 0;

    int ans = INT_MAX;
    while(r<n){
        sum += v[r];
        while(sum >=k){
            ans = min(ans, r-l + 1);
            sum -= v[l];
            l++;
        }
        r++;
    }
    if(ans == INT_MAX){
        cout << -1 <<endl;
    }else {
        cout << ans << endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    vector<int> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];

    int l = 0, r = 0;
    long long sum = 0;

    int ans = INT_MAX;

    while(r < n)
    {
        sum += v[r];

        while(sum >= k)
        {
            ans = min(ans, r-l+1);

            sum -= v[l];
            l++;
        }

        r++;
    }

    if(ans == INT_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}*/