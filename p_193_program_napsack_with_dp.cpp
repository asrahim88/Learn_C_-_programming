#include <bits/stdc++.h>
using namespace std;
int value[150], weight[150];

int napSack(int i, int maxWeight){

    if(i<0 || maxWeight<=0)
        return 0;
    
    if(weight[i]<=maxWeight){
        int opt1 = napSack(i-1, maxWeight-weight[i]) + value[i];
        int opt2 = napSack(i-1, maxWeight);
        return max(opt1, opt2);
    }else{
        return napSack(i-1, maxWeight);
    }
}
int main() {
    int n, maxWeight;
    cin >>n;

    for(int i=0; i<n; i++){
        cin >> value[i];
    }
    for(int i=0; i<n; i++){
        cin >> weight[i];
    }

    cin >> maxWeight;

    cout << napSack(n-1, maxWeight) << endl;

    return 0;
}