#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int mxSum = 0;
    mxSum = A+B;

    
    if(A + (A-1)> mxSum)
        mxSum = A + (A-1);
    else if(B + (B-1)> mxSum)
        mxSum = B+ (B-1);
        
    cout << mxSum << endl;
    
        
    return 0;
}