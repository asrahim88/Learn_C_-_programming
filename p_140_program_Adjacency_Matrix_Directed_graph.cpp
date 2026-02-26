#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    int adjMatrix[n][n];
    memset(adjMatrix, 0, sizeof(adjMatrix));
    
    for(int i =0; i<n; i++)
        for(int j =0; j<n; j++)
            if(i==j)
                adjMatrix[i][j] = 1;

    while(e--){
        int a, b;
        cin >> a >> b;
        adjMatrix[a][b]= 1;
    }

    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}