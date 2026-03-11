#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adjList[150];
int distanceAray[150];

void dijkstra(int src){
    queue<pair<int,int>> q;
    q.push({src, 0}); 
    distanceAray[src] = 0;
    
    while(!q.empty()){
        pair<int,int> parent = q.front();
        q.pop();

        int parentNode = parent.first;
        int parentDist = parent.second;

        for(pair<int,int> child: adjList[parentNode]){
            int childNode = child.first;
            int childDist = child.second;

            if(parentDist + childDist <distanceAray[childNode]){
                distanceAray[childNode] = parentDist + childDist;
                q.push({childNode, distanceAray[childNode]});
            }
        }
    }
}

int main() {
    int n, e; 
    cin >> n >> e;
    
    while(e--){
        int a, b, c;
        cin >> a >> b >> c;

        adjList[a].push_back({b,c});
        adjList[b].push_back({a,c});
    }
    // memset(distanceAray, false, sizeof(distanceAray));
    for(int i=0; i<n; i++){
        distanceAray[i] = INT_MAX;
    }
    dijkstra(0);
    for(int i=0; i<n; i++){
        cout << i << " -> " << distanceAray[i] << endl; 
        
    }

    return 0;
}