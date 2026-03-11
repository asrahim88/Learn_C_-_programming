#include <bits/stdc++.h>
using namespace std;

int printsum(int num){
    if(num > 5)
        return 0;
    return num + printsum(num + 1);
}

int main() {
    cout << printsum(1) << endl;
    return 0;
}