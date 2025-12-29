#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> number = {1,2,3,4,5,6,7,8,9,10,11};
    vector<int> number2  = {10,20,30,40,50,60,70,80,90,100};
    replace(number.begin(),number.end(), 1, 500);

    auto it = find(number.begin(), number.end(), 800);

    if(it == number.end()){
        cout << "not found";
    }else {
        cout << "found";
    }
    return 0;
}