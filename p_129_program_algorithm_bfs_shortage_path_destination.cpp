#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visitedNode[1005];
int level[1005];
int parentNode[1005];

void bfs(int source){
    queue<int> q;
    q.push(source);
    visitedNode[source] = true;
    level[source] = 0;
    parentNode[source] = -1;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child : adj_list[parent]){
            if(visitedNode[child] == false){
                q.push(child);
                visitedNode[child] = true;
                level[child] = level[parent] + 1;
                parentNode[child] = parent;
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
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visitedNode, false, sizeof(visitedNode));
    memset(level, -1, sizeof(level));
    memset(parentNode, -1, sizeof(parentNode));

    int source, destination;
    cin >> source >> destination;
    bfs(source);

    int node = destination;
    vector<int> path;
    while(node != -1){
        path.push_back(node);
        node = parentNode[node];
    }

    reverse(path.begin(), path.end());
    for(int i =0; i<path.size() ;i++){
        cout << path[i] << " ";
    }
    return 0;
}