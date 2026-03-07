#include <bits/stdc++.h>
using namespace std;
int parent[105];
int grp_size[150];

int findLeaderNode(int node){
    if(parent[node] == -1)
        return node;
    int leader = findLeaderNode(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsuUnion(int node1, int node2){
    int leader1 = findLeaderNode(node1);
    int leader2 = findLeaderNode(node2);

    if(grp_size[leader1]> grp_size[leader2]){
        parent[leader2] = leader1;
        grp_size[leader1] += grp_size[leader2];
    }else {
        parent[leader1] = leader2;
        grp_size[leader2] += grp_size[leader1];
    }
}
int main() {
    memset(parent, -1, sizeof(parent));
    memset(grp_size, -1, sizeof(grp_size));

    dsuUnion(0,1);
    dsuUnion(0, 2);
    dsuUnion(3,4);
    dsuUnion(2,3);


    for(int i=0; i<6; i++){
        cout << i << " -> " << parent[i] << endl;
    }
    return 0;
}