#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[10005];
bool visitedNode[10005];

void bsfTraversal(int src){
    queue<int> q;
    q.push(src);
    visitedNode[src] = true;

    while(!q.empty()){
        int parentNode = q.front();
        q.pop();

        cout << parentNode << " ";

        for(int child : adj_list[parentNode]){
            if(visitedNode[child] == false){
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
    bsfTraversal(0);
    
    
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> adj_list[10005];
// bool visited[10005];
// void bfsTraversal(int src){
//     queue<int> q;
//     q.push(src);
//     visited[src] = true;

//     while(!q.empty()){
//         int parentNode = q.front();
//         q.pop();

//         cout << parentNode << " ";

//         for(int child : adj_list[parentNode]){
//             if(visited[child] == false){
//                 q.push(child);
//                 visited[child] = true;
//             }
//         }
//     }
// }
// int main() {
//     int n, e;
//     cin >> n >> e;
//     while(e--){
//         int a, b;
//         cin >> a >> b;
//         adj_list[a].push_back(b);
//         adj_list[b].push_back(a);
//     }
//     memset(visited, false, sizeof(visited));
//     bfsTraversal(0);
//     return 0;
// }