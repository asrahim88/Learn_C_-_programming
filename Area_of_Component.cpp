#include <bits/stdc++.h>
using namespace std;
int row, col, cnt;
char grid[1001][1001];
bool visitedNode[1001][1001];

vector<pair<int,int>> movement = {{0,1}, {0,-1}, {1,0}, {-1,0}};

bool valid(int r, int c){
    if(r<0 || r>=row || c<0 || c>=col)
        return false;
    return true;
}

void dfs(int r, int c){
    visitedNode[r][c] = true;
    cnt++;
    for(int i =0; i<4; i++){
        int childI = r + movement[i].first;
        int childJ = c + movement[i].second;

        if(valid(childI, childJ) && !visitedNode[childI][childJ] && grid[childI][childJ] == '.')
            dfs(childI, childJ);
    }
}
int main() {
    cin >> row >> col;

    for(int i =0 ;i<row; i++)
        for(int j =0; j<col; j++)
            cin >> grid[i][j];
    
    memset(visitedNode, false, sizeof(visitedNode));
    
    int mn = INT_MAX;
    for(int i =0; i<row; i++){
        for(int j=0; j<col; j++)
        {
            if(!visitedNode[i][j] && grid[i][j] == '.'){
                cnt = 0;
                dfs(i, j);
                mn = min(mn, cnt);
            }
        }
    }
    if(mn == INT_MAX)
        cout << -1 << endl;
    else
        cout << mn << endl;
    return 0;
}