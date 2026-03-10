#include <bits/stdc++.h>
using namespace std;

char grid[105][150];
bool visited[105][105];
int row, col;

vector<pair<int,int>> movement = {{-1,0},{1,0},{0,1},{0,-1}};

bool valid(int r, int c){
    if(r<0 || r>= row || c<0 || c>= col)
        return false;
    return true;
}

void bfs(int srcI, int srcJ){
    queue<pair<int,int>> q;
    q.push({srcI, srcJ});
    visited[srcI][srcJ] = true;

    while(!q.empty()){
        pair<int,int> parent = q.front();
        q.pop();

        int parentI = parent.first;
        int parentJ = parent.second;

        cout << parentI << " " << parentJ << endl;

        for(int i =0; i<4; i++){
            int childI = parentI + movement[i].first;
            int childJ = parentJ + movement[i].second;

            if(valid(childI, childJ) && !visited[childI][childJ]){
                q.push({childI, childJ});
                visited[childI][childJ] = true;
            }
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

    bfs(srcI, srcJ);
    return 0;
}