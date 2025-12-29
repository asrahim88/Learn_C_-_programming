#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> number;
    for(int i =0; i<n; i++){
        int x;
        cin >> x;
        number.push_back(x);
    }

    for(int x: number){
        cout << x << " ";
    }
    cout << endl;

    int N;
    cin >> N;
    vector<string> v(N);
    cin.ignore();
    for(int i=0; i<N; i++){
        getline(cin, v[i]);
    }

    for(string x : v){
        cout << x << " ";
    }
    return 0;
}