#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[105];
bool visitedNode[105];
int pathParent[105];
void bfs(int source){
    queue<int> q;
    q.push(source);
    visitedNode[source] = true;
    pathParent[source] = -1;

    while(!q.empty()){
        int parentNode = q.front();
        q.pop();

        for(int child: adjList[parentNode]){
            if(!visitedNode[child]){
                q.push(child);
                visitedNode[child] = true;
                pathParent[child] = parentNode;
            }
        }
    }
}
int main() {
    int n, e;
    cin >> n >> e;
    memset(visitedNode, false, sizeof(visitedNode));
    memset(pathParent, -1, sizeof(pathParent));
    while(e--){
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int source, destination;
    cin >> source >> destination;

    bfs(source);

    vector<int> v;
    int node = destination;
    while(node !=-1){
        v.push_back(node);
        node = pathParent[node];
    }
    reverse(v.begin(), v.end());
    for(int i =0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}