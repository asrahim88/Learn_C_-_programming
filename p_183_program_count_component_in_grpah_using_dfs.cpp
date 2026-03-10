#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[150];
bool visited[150];

void dfs(int src){
    visited[src] = true;

    for(int child: adjList[src]){
        if(!visited[child]){
            dfs(child);
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    
    while(e--){
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
  
    int count = 0;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            count ++;
            dfs(i);
        }
    }
    cout << count << endl;
    return 0;
}