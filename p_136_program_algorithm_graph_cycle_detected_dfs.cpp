#include <bits/stdc++.h>
using namespace std;
bool visitedNode[150];
vector<int> adj_list[105];
int parentLevel[105];

bool cycle;

void dfs(int src){
    visitedNode[src] = true;
    for(int child: adj_list[src]){
        if(visitedNode[child] && parentLevel[src] !=child)
        {
            cycle = true;
        }
        if(!visitedNode[child])
        {
            parentLevel[child] = src;
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
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visitedNode, false, sizeof(visitedNode));
    memset(parentLevel, -1, sizeof(parentLevel));

    cycle = false;
    for(int i =0; i<n; i++)
    {
        if(!visitedNode[i])
            dfs(i);
    }
    
    

    if(cycle)
        cout << "cycle Detected" << endl;
    else 
        cout << "No cycle detected" << endl;
    return 0;
}