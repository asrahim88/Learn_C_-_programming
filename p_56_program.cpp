#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> aray(10);
    for(int i=0; i<aray.size(); i++){
        cout << aray[i] << endl;
    }

    aray = {10,20,30,50};
    for(int i=0;i<aray.size(); i++)
    {
        cout << aray[i] << endl;
    }
    aray = {1,};
    for(int i=0;i<aray.size(); i++)
    {
        cout << aray[i] << endl;
    }
    return 0;
}