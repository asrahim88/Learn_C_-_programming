#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool visitedNode[105];
int parentLevel[105];
bool cycle;
void bfs(int src){
    queue<int> q;
    q.push(src);
    visitedNode[src] = true;

    while(!q.empty()){
        int parentNode = q.front();
        q.pop();

        for(int child: adj_list[parentNode]){
            if(visitedNode[child] && parentLevel[parentNode] != child)
                cycle = true;
            if(!visitedNode[child]){
                q.push(child);
                visitedNode[child] = true;
                parentLevel[child] = parentNode;
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
    memset(parentLevel, -1, sizeof(parentLevel));

    cycle = false;
    for(int i =0; i<n; i++){
        if(!visitedNode[i])
            bfs(i);
    }
    if(cycle == true)
        cout << " Cycle Detected.";
    else
        cout << " Cycle not detected.";
    return 0;
}