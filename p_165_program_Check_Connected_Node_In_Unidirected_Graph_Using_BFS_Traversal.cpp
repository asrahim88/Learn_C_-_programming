#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[150];
int visitedArray[150];
void bfs(int src){
    queue<int> q;
    q.push(src);
    visitedArray[src] = true;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child: adjList[parent]){
            if(!visitedArray[child]){
                q.push(child);
                visitedArray[child] = true;
            }
        }
    }
}
int main() {
    int n , e;
    cin >> n >> e;
    memset(visitedArray, false, sizeof(visitedArray));
    while(e--){
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }  

    int src, dest;
    cin >> src >> dest;

    bfs(src);

    if(visitedArray[dest]){
        cout << "Connected Node";
    }else {
        cout << "Not Connected";
    }
    return 0;
}