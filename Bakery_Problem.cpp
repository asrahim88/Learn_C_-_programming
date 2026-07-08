#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int bribeCost = n * 60 + k;
    int cost = n * 100;
    if(bribeCost < cost){
        cout << bribeCost << endl;
    }else {
        cout << cost << endl;
    }
    return 0;
}