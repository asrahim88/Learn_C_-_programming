#include <bits/stdc++.h>
using namespace std;

int main() {
    int node, edge;
    cin >> node>> edge;

    int adj_matrix[node][node];
    memset(adj_matrix, 0, sizeof(adj_matrix));

    for(int i =0; i<edge; i++)
        for(int j =0; j<edge; j++)
            if(i==j)
                adj_matrix[i][j] = 1;
    
    for(int i =0; i<edge; i++){
        int a, b;
        cin >> a >> b;
        adj_matrix[a][b] = 1;
        adj_matrix[b][a] = 1;
    }

    for(int i =0; i<node; i++){
        for(int j =0; j<node; j++){
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}