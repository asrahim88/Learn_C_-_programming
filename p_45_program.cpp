#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--)
    {
        string S, X;
        cin >> S >> X;
        int length = X.size();

        while (true)
        {
            int indx = S.find(X);

            if(indx != -1) {
                S.replace(indx, length, "#");
            }else {
                break;
            }
        }
        cout << S << endl;
    }
    return 0;
}