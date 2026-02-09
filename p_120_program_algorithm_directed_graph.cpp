#include<bits/stdc++.h>
using namespace std;
int main() {
    int n , e;
    cin >> n >> e;
    int adj_mat[n][n];
    memset(adj_mat,0,sizeof(adj_mat)); // set the matrix value by default 0.
    
    for(int i =0; i<e; i++)
        for(int j =0; j<e; j++)
            if(i==j)
                adj_mat[i][j] = 1;

    for(int i =0; i<e; i++){
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
    }

    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}