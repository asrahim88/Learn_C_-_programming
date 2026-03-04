#include <bits/stdc++.h>
using namespace std;
int parent[150];
int findOperation(int node){
    cout << node << endl;
    if(parent[node] == -1)
        return node;
    int leader = findOperation(parent[node]);
    return leader;
}
int main() {
    memset(parent, -1, sizeof(parent));
    parent[0] = 1;
    parent[1] = -1;
    parent[2] = 1;
    parent[3] = 1;
    parent[4] = 5;
    parent[5] = 3;
    cout << findOperation(4) << endl;
    return 0;
}