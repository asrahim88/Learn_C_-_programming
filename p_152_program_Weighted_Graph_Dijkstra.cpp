#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adjList[105];
int distanceArray[150];

void dijkstra(int source){
    queue<pair<int,int>> q;
    q.push({source, 0});

    distanceArray[source] = 0;

    while(!q.empty()){
        pair<int,int> parent = q.front();
        q.pop();
        
        int parentNode = parent.first;
        int parentDistance = parent.second;
        
        for(pair<int,int> child : adjList[parentNode]){
            int childNode = child.first;
            int childDistance = child.second;

            if(parentDistance + childDistance < distanceArray[childNode]){
                distanceArray[childNode] = parentDistance + childDistance;
                q.push({childNode, distanceArray[childNode]});
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
        adjList[b].push_back({a, c});
    }
    
    for(int i=0; i<n; i++){
        distanceArray[i] = INT_MAX;
    }

    int source, dest;
    cin >> source >> dest;
    dijkstra(source);

    cout << distanceArray[dest] << endl;

    return 0;
}