#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    int matrix[n][n];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                matrix[i][j] = 0;
            }else {
                matrix[i][j] = INT_MAX;
            }
        }
    }

    while(e--){
        int a, b, c;
        cin >> a >> b >> c;
        matrix[a][b] = c;
    }

    for(int k=0; k<n; k++){
        for(int i= 0; i<n; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][k] != INT_MAX && matrix[k][j] != INT_MAX && matrix[i][k] + matrix[k][j] < matrix[i][j]){
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }
    bool cycle = false;
    for(int i= 0; i<n; i++){
        if(matrix[i][i]<0)
            cycle = true;
    }
    if(cycle)
        cout << "Negative weighted cycle detected." << endl;
    else{
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}