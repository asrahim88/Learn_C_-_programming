#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[150];
bool visited[105];
int level[150];
int L;
vector<int> v;
void bfs(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();
        
        for(int child: adjList[parent]){
            if(!visited[child]){
                if(L == level[parent]+1)
                {
                    v.push_back(child);  
                }
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
            }
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

    
    
    cin >> L;
    bfs(0);

    reverse(v.begin(), v.end());
    for(int child: v){
        cout << child << " ";
    }
    return 0;
}