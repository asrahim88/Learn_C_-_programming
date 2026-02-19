#include <bits/stdc++.h>
using namespace std;
int row, col;
char grid[1000][1000];
bool visited[1000][1000];
int shortageDistance[1000][1000];

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
    shortageDistance[sourceI][sourceJ] = 0;

    while (!q.empty())
    {
        pair<int,int> parentSource = q.front();
        q.pop();
        
        int parentSourceI = parentSource.first;
        int parentSourceJ = parentSource.second;
        
        for(int i =0 ;i<4; i++){
            int childI = parentSourceI + movement[i].first;
            int childJ = parentSourceJ + movement[i].second;

            if(valid(childI, childJ) && !visited[childI][childJ] && grid[childI][childJ] !='#'){
                q.push({childI, childJ});
                visited[childI][childJ] = true;
                shortageDistance[childI][childJ] = shortageDistance[parentSourceI][parentSourceJ] + 1;
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
    memset(shortageDistance, -1, sizeof(shortageDistance));
    
    int sourceI, sourceJ;
    int flag = 0;
    for(int i =0; i<row; i++){
        for(int j=0; j<col; j++){
            if(!visited[i][j] && grid[i][j] == '.'){
                bfs(i,j);
                flag++;
            }
        }
    }

    // bfs(sourceI, sourceJ);
   cout << flag << endl;
    
    return 0;
}
