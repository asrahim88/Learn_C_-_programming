#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
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
        if(l==-1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        parentNode->left = myLeft;
        parentNode->right = myRight;

        if(parentNode->left) q.push(parentNode->left);
        if(parentNode->right) q.push(parentNode->right);
    }
    return root;
}

void outerLeftTraversal(Node* root){
    if(root == NULL){
        return;
    }
    if(!root->left && root->right){
        outerLeftTraversal(root->right);
    }else{
        outerLeftTraversal(root->left);
    }
    cout << root->val<< " ";
}

void outerRightTraversal(Node* root){
    if(root == NULL) return;
    cout << root->val << " ";
     if(!root->right && root->left){
         outerRightTraversal(root->left);
    }else{
        outerRightTraversal(root->right);
    }
}

int main() {
    Node* root = inputTree();
    if(root->left)
        outerLeftTraversal(root);
    else cout << root->val << " ";
    outerRightTraversal(root->right);
    return 0;
}