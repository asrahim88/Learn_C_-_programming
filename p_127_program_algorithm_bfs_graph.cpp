#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visitedNode[1005];

void bfsTraversal(int src){
    queue<int> q;
    q.push(src);
    visitedNode[src] = true;

    while(!q.empty()){
        int parentNode = q.front();
        q.pop();

        for(int child: adj_list[parentNode]){
            if(!visitedNode[child]){
                q.push(child);
                visitedNode[child] = true;
            }        
        }
    }
}
int main() {
    int n, e;
    cin >> n >> e;


    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visitedNode, false, sizeof(visitedNode));

    int src, dest;
    cin >> src >> dest;

    bfsTraversal(src);
    if(visitedNode[dest] == true){
        cout << "Yes\n";
    }else {
        cout << "No\n";
    }
    return 0;
}