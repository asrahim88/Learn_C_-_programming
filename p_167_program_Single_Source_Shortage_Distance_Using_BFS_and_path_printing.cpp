#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[105];
bool visited[105];
int parentNode[105];

void bfs(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;
    parentNode[src] = -1;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child : adjList[parent]){
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
                parentNode[child] = parent;
            }
        }
    }
}
int main() {
    int n, e;
    cin >> n >> e;
    memset(visited, false, sizeof(visited));
    memset(parentNode, -1, sizeof(parentNode));

    while(e--){
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    int src, dest;
    cin >> src >> dest;

    bfs(src);

    vector<int> v;
    int node = dest;
    while(node != -1){
        v.push_back(node);
        node = parentNode[node];
    }
    reverse(v.begin(), v.end());
    for(int i =0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}