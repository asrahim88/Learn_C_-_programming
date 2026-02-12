#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visitedNode[1005];
int level[1005];


void bfsTraversal(int source){
    queue<int> q;
    q.push(source);
    visitedNode[source] = true;
    level[source] = 0;
    
    while(!q.empty()){
        int parentNode = q.front();
        q.pop();

        for(int child: adj_list[parentNode]){
            if(visitedNode[child] == false)
            {
                q.push(child);
                visitedNode[child] = true;
                level[child] = level[parentNode] + 1;
            }
        }
    }
    
}
int main() {
    int n, e;
    cin >> n >> e;


    while(e--){
        int a, b;
        cin >> a >>b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visitedNode, false, sizeof(visitedNode));
    memset(level, -1, sizeof(level));

    int source, destination;
    cin >> source >> destination;

    bfsTraversal(source);
    cout << level[destination] << endl;
    return 0;
}