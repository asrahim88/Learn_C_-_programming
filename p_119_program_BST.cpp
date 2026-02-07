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

        Node* myLeft;
        Node* myRight;

        if(l == -1) myLeft = NULL;
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

bool BinarySearchTree(Node* root, int val){
    if(root == NULL){
        return false;
    }
    if(root->val == val){
        return true;
    }
    if(root->val > val){
        bool l = BinarySearchTree(root->left, val);
        return l;
    }else {
        bool r = BinarySearchTree(root->right, val);
        return r;
    }
}
int main() {
    Node* root = inputTree();
    int val;
    cin >> val;
    if(BinarySearchTree(root, val)){
        cout << "Found" << endl;
    }else {
        cout << "Not Found" << endl;
    }
    return 0;
}