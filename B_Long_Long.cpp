#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<long long> v(n);
        long long sum = 0;

        for(int i=0; i<n; i++){
            cin >> v[i];
            sum += llabs(v[i]);
        }

        int operations = 0;
        int i =0;

        while(i < n){
            if(v[i] > 0){
                i++;
                continue;
            }
            bool ngtv = false;
            while(i<n && v[i] <=0){
                if(v[i] < 0)
                    ngtv = true;
                i++;
            }
            if(ngtv == true){
                operations++;
            }
        }
        cout << sum <<  ' ' << operations << endl;
    }
    return 0;
}

/*

        while(i < n) {

            if(a[i] > 0) {
                i++;
                continue;
            }

            bool hasNegative = false;

            while(i < n && a[i] <= 0) {

                if(a[i] < 0)
                    hasNegative = true;

                i++;
            }

            if(hasNegative)
                ops++;
        }

        cout << sum << ' ' << ops << '\n';
    }
}
    */