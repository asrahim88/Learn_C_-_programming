#include <bits/stdc++.h>
using namespace std;
char grid[150][150];
bool visited[150][150];
int level[150][150];

int row, col;
vector<pair<int,int>> movement = {{0,1},{0,-1},{1,0},{-1,0}};

bool valid(int r, int c){
    if(r<0 || r>=row || c <0 || c>=col)
        return false;
    return true;
}

void bfs(int srcI, int srcJ){
    queue<pair<int,int>> q;
    q.push({srcI, srcJ});
    visited[srcI][srcJ] = true;
    level[srcI][srcJ] = 0;

    while(!q.empty()){
        pair<int,int> parent = q.front();
        q.pop();

        int parentI = parent.first;
        int parentJ = parent.second;

        for(int i=0; i<4; i++){
            int childI = parentI + movement[i].first;
            int childJ = parentJ + movement[i].second;

            if(valid(childI, childJ) && !visited[childI][childJ]){
                q.push({childI, childJ});
                visited[childI][childJ] = true;
                level[childI][childJ] = level[parentI][parentJ] + 1;
            }
        }
    }
}
int main() {
    cin >> row >> col;
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            cin >> grid[i][j];
    
    int srcI, srcJ, destI, destJ;
    cin >> srcI >> srcJ >> destI >> destJ;
    
    bfs(srcI, srcJ);
    cout << level[destI][destJ];
    return 0;
}