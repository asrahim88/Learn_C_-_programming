#include <bits/stdc++.h>
using namespace std;

int parent[105];

int findOperation(int node){
    while(parent[node] != -1){
        cout << node << endl;
        node = parent[node];
    }
    return node;
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
// #include <bits/stdc++.h>
// using namespace std;
// int parentArray[150];
// int findOperation(int node){
//     while(parentArray[node] != -1){
//         cout << node << endl;
//         node = parentArray[node];
//     }
//     return node;
// }
// int main() {
//     memset(parentArray, -1, sizeof(parentArray));
    // parentArray[0] = 1;
    // parentArray[1] = -1;
    // parentArray[2] = 1;
    // parentArray[3] = 1;
    // parentArray[4] = 5;
    // parentArray[5] = 3;

//     cout << findOperation(4) << endl;
//     return 0;
// }