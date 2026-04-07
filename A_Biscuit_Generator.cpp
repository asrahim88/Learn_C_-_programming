#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, T;
    cin >> A >> B >> T;
    int count =0;
    if(A>T){
        cout << 0 << endl;
        return 0;
    }else {

        int tempA = A;
        while (A<=T)
        {
            A +=tempA;
            count++;
        }
    }
    cout << count * B << endl;
    
    
    return 0;
}