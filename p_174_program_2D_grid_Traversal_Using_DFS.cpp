#include <bits/stdc++.h>
using namespace std;
int row, col;
char grid[105][150];
bool visited[105][105];
vector<pair<int,int>> movement = {{-1, 0}, {1,0}, {0,-1}, {0, 1}};

bool valid(int r, int c){
    if(r<0 || r>=row || c<0 || c>=col)
        return false;
    return true;
}
void dfs(int sourceI, int sourceJ){
    cout << sourceI << " " << sourceJ << endl;
    visited[sourceI][sourceJ] = true;

    for(int i =0; i<4; i++){
        int childI = sourceI + movement[i].first;
        int childJ = sourceJ + movement[i].second;
        if(valid(childI, childJ) && !visited[childI][childJ]){
            dfs(childI, childJ);
        }
    }
}

int main() {
    cin >> row >> col;
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> grid[i][j];
        }
    }

    int sourceI, sourceJ;
    cin >> sourceI >> sourceJ;
    memset(visited, false, sizeof(visited));

    dfs(sourceI, sourceJ);

    return 0;
}