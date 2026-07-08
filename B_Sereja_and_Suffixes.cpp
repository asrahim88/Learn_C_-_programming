#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    vector<int> v(n+1), cnt(n+1);

    for(int i=1; i<=n; i++){
        cin >> v[i];
    }

    set<int> st;
    for(int i=n; i>=1;i--){
        st.insert(v[i]);
        cnt[i]= st.size();
    }

    for(int i=1; i<=m; i++){
        int x;
        cin >> x;
        cout << cnt[x] <<endl;
    }


    return 0;
}