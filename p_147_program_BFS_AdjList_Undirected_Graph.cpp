#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[105];
bool visitedNode[105];
void bfs(int src){
    queue<int> q;
    q.push(src);
    visitedNode[src] = true;

    while(!q.empty()){
        int parentNode = q.front();
        q.pop();

        cout << parentNode<< " ";

        for(int child: adjList[parentNode]){
            if(!visitedNode[child])
                q.push(child);
                visitedNode[child] = true;
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
    memset(visitedNode,false, sizeof(visitedNode));

    bfs(5);

    return 0;
}