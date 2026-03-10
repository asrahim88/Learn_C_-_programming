#include <bits/stdc++.h>
using namespace std;
char grid[150][150];
bool visited[150][150];
int row, col;

vector<pair<int,int>> movement = {{0,1},{0,-1},{1,0},{-1,0}};
bool valid(int r, int c){
    if(r<0 || r>= row || c<0 || c>=col)
        return false;
    return true;
}
void dfs(int srcI, int srcJ){
    visited[srcI][srcJ] = true;

    cout << srcI << " " << srcJ << endl;

    for(int i =0; i<4; i++){
        int childI = srcI + movement[i].first;
        int childJ = srcJ + movement[i].second;

        if(valid(childI, childJ) && !visited[childI][childJ]){
            dfs(childI, childJ);
        }
    }
}

int main() {
    cin >> row >> col;
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)  
            cin >> grid[i][j];

    memset(visited, false, sizeof(visited));
    
    int srcI, srcJ;
    cin >> srcI >> srcJ;

    dfs(srcI, srcJ);
    return 0;
}