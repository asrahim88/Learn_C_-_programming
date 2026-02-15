#include <bits/stdc++.h>
using namespace std;
int row, col;
char grid[105][105];
bool visited[105][105];

vector<pair<int,int>> movement = {{-1, 0}, {1, 0}, {0,1}, {0, -1}};

bool valid(int r, int c){
    if(r<0 || r>=row || c<0 || c>=col)
        return false;
    return true;
}

void bfs(int sourceI, int sourceJ){
    queue<pair<int,int>> q;
    q.push({sourceI, sourceJ});
    visited[sourceI][sourceJ] = true;

    while (!q.empty())
    {
        pair<int,int> parentSource = q.front();
        q.pop();
        
        int parentSourceI = parentSource.first;
        int parentSourceJ = parentSource.second;
        
        cout << parentSourceI << " " << parentSourceJ << endl;

        for(int i =0 ;i<4; i++){
            int childI = parentSourceI + movement[i].first;
            int childJ = parentSourceJ + movement[i].second;

            if(valid(childI, childJ) && !visited[childI][childJ]){
                q.push({childI, childJ});
                visited[childI][childJ] = true;
            }
        }
    }   
}

int main() {
    cin >> row >> col;
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            cin >> grid[i][j];
        }   
    }
    
    memset(visited, false, sizeof(visited));

    int sourceI, sourceJ;
    cin >> sourceI >> sourceJ;

    bfs(sourceI, sourceJ);
    
    return 0;
}
