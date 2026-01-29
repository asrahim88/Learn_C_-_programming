#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* right;
        Node* left;

        Node(int val){
            this->val = val;
            this->right = NULL;
            this->left = NULL;
        }
};
Node* inputTree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()){
        Node* parentNode = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft, *myRight;
        if(l ==-1) myLeft = NULL;
        else myLeft = new Node(l);
        
        if(r==-1) myRight = NULL;
        else myRight = new Node(r);

        parentNode->left = myLeft;
        parentNode->right = myRight;

        if(parentNode->left) q.push(parentNode->left);
        if(parentNode->right) q.push(parentNode->right);
    }
    return root;
}

int maxHeight(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    int total = max(l, r)+1;
    return total;
}

int treeNodeCountDepthWise(Node* root){
    if(root == NULL) return 0;
    int l = treeNodeCountDepthWise(root->left);
    int r = treeNodeCountDepthWise(root->right);
    int total = l + r + 1;
    return total;
}

int main() {
    Node* root = inputTree();
    int mxHeight = maxHeight(root);
    int totalNode = treeNodeCountDepthWise(root);
    int calculate = pow(2,mxHeight+1);
    int totalResult = calculate-1;

    if(totalNode == totalResult){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }

    return 0;
}