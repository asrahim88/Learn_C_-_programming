#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    int adj_matrix[n][n];

    memset(adj_matrix, 0, sizeof(adj_matrix));

    for(int i =0; i<n; i++)
        for(int j =0; j<n; j++)
            if(i==j)
                adj_matrix[i][j] = 1;

    while (e--)
    {
        int row, col;
        cin >> row >> col;
        adj_matrix[row][col] = 1;
    }

    int q;
    cin >> q;
    while(q--){
        int s_row, s_col;
        cin >> s_row >> s_col;

        if(adj_matrix[s_row][s_col]==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}