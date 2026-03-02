#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adjList[105];
int distanceArray[105];
void dijkstraOPT(int source){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, source});
    distanceArray[source] = 0;

    while(!pq.empty()){
        pair<int,int> parent = pq.top();
        pq.pop();

        int parenetNode = parent.second;
        int parentDistance = parent.first;

        for(pair<int,int> child : adjList[parenetNode]){
            int childNode = child.first;
            int childDistance = child.second;

            if(parentDistance + childDistance < distanceArray[childNode]){
                distanceArray[childNode] = parentDistance + childDistance;
                pq.push({distanceArray[childNode], childNode});
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
    for(int i =0; i<n; i++){
        distanceArray[i] = INT_MAX;
    }
    int src, dest;
    cin >> src >> dest;
    dijkstraOPT(src);
    cout<< distanceArray[dest];
    return 0;
}