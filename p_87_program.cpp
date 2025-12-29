#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum = 0;
    vector<int> number = {1,23,4,5,6,7,8,910};
    for(auto it = number.begin(); it<number.end(); it++){
        cout << *it << " ";
        sum += *it;
    }
    cout << "\n" << sum << endl;
    return 0;
}