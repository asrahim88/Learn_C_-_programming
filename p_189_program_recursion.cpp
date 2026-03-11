#include <bits/stdc++.h>
using namespace std;
int sum = 0;
void printNumber(int n){
    if(n>5)
        return;
    sum +=n;
    cout << n << " " << sum << " " <<endl;
    printNumber(n+1);

}

int main() {
    printNumber(1);
    return 0;
}