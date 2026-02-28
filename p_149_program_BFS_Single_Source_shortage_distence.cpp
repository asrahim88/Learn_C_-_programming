#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[105];
int parentOrLevel[105];
bool visitedNode[105];
void bfs(int source){
    queue<int> q;
    q.push(source);
    visitedNode[source] = true;
    parentOrLevel[source] = 0;

    while(!q.empty()){
        int parentNode = q.front();
        q.pop();

        for(int child: adjList[parentNode]){
            if(!visitedNode[child]){
                q.push(child);
                visitedNode[child] = true;
                parentOrLevel[child] = parentOrLevel[parentNode] + 1;
            }
        }

    }

}
int main() {
    int n, e;
    cin >> n >> e;
    memset(parentOrLevel, -1, sizeof(parentOrLevel));
    memset(visitedNode, false, sizeof(visitedNode));
    while(e--){
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int source, destination;
    cin >> source >> destination;

    bfs(source);
    cout << parentOrLevel[destination];
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> adjList[105];
// bool visitedNode[105];
// int level[105];
// void bfs(int src){
//     queue<int> q;
//     q.push(src);
//     visitedNode[src] = true;
//     level[src] = 0;

//     while(!q.empty()){
//         int parent = q.front();
//         q.pop();

//         for(int child: adjList[parent]){
//             if(!visitedNode[child]){
//                 q.push(child);
//                 visitedNode[child] = true;
//                 level[child] = level[parent] + 1;
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
//         adjList[a].push_back(b);
//         adjList[b].push_back(a);
//     }
//     memset(visitedNode, false, sizeof(visitedNode));
//     memset(level, -1, sizeof(level));

//     int src, dest;
//     cin >> src >> dest;

//     bfs(src);

//     return 0;
// }