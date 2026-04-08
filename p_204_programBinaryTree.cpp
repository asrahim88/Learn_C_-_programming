#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* left ;
        Node* right;

        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){
    if(root == NULL)
        return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL)
    return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}
void levelOrder(Node *root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* parent = q.front();
        cout << parent->val << "  ";
        q.pop();

        if(parent->left)
            q.push(parent->left);
        if(parent->right)
            q.push(parent->right);
    }
}
int main() {
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    preOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    levelOrder(root);
    return 0;
}