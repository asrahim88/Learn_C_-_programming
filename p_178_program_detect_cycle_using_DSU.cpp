#include <bits/stdc++.h>
using namespace std;
int parent[150];
int grp_size[150];

int findLeaderNode(int node){
    if(parent[node] == -1){
        return node;
    }
    int leader = findLeaderNode(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2){
    int leader1 = findLeaderNode(node1);
    int leader2 = findLeaderNode(node2);

    if(grp_size[leader1]> grp_size[leader2]){
        parent[leader2] = leader1;
        grp_size[leader1] += grp_size[leader2];
    }else{
        parent[leader1] = leader2;
        grp_size[leader2] += grp_size[leader1];

    }
}

int main() {
    memset(parent, -1, sizeof(parent));
    memset(grp_size, 1, sizeof(grp_size));

    int n, e;
    cin >> n >> e;
    bool cycle = false;
    while(e--){
        int a, b;
        cin >> a >> b;

        int leaderA = findLeaderNode(a);
        int leaderB = findLeaderNode(b);

        if(leaderA == leaderB){
            cycle = true;
        }else{
            dsu_union(a,b);
        }
    }
    if(cycle){
        cout << "Cycle Detected" << endl;
    }
    else {
        cout << " No cycle" << endl;
    }
    return 0;
}