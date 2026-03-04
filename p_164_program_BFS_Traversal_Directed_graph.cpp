#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[150];
bool visited[150];
void bfsTraversal(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        cout << parent << " ";
        for(int child: adjList[parent]){
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
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
    }
    memset(visited, false, sizeof(visited));
    bfsTraversal(0);
    return 0;
}