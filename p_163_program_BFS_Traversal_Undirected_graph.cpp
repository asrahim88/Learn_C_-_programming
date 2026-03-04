#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[105];
bool visitedArray[150];
void bfsTraversal(int src){
    queue<int> q;
    q.push(src);
    visitedArray[src] = true;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        cout << parent << " ";
        for(int child : adjList[parent]){
            if(!visitedArray[child]){
                q.push(child);
                visitedArray[child] = true;
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
        adjList[b].push_back(a);
    }    
    memset(visitedArray, false, sizeof(visitedArray));

    bfsTraversal(0);
    return 0;
}