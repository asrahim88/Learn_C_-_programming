#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long l, w, r, g, b;
    cin >> l >> w >> r >> g >> b;

    if(w <l){
        swap(l, w);
    }

    vector<long long> len_list = {l, l, w, w};

    vector<vector<long long>> color_list = {{r,g,b}, {r, b, g}, {b, r, g}};

    long long res = INT_MAX;

    do{
        for(auto color: color_list){
            auto len = len_list;
            long long temp_res = 0;

            for(int i =0; i<4; i++){
                if(color.back() >= len[i]){
                    color.back() -= len[i];
                    len[i] = 0;
                }else {
                    len[i] -= color.back();
                    color.back() = 0;
                    i--;
                }
                temp_res++;
                if(color.back() == 0){
                    color.pop_back();
                }
            }
            res = min(res, temp_res);
        }
    }
    while(next_permutation(len_list.begin(), len_list.end()));
    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}