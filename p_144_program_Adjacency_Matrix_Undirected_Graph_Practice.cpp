#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    int adjMatrix[n+1][n+1];

    memset(adjMatrix, 0, sizeof(adjMatrix));   
    
    while(e--){
        int a, b;
        cin >> a >> b;
        adjMatrix[a][b] = 1;
        adjMatrix[b][a] = 1;
    }

    for(int i =1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}