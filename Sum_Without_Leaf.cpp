#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;

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

        if(l==-1) myLeft = NULL;
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
int sumOfWithoutLeafNode(Node* root){
    queue<Node*> q;
    if(root) q.push(root);
    int sum = 0;
    while (!q.empty())
    {
        Node* parentNode = q.front();
        q.pop();
        
        if(parentNode->left == NULL && parentNode->right == NULL){
        }else {
            sum += parentNode->val;
        }

        if(parentNode->left) q.push(parentNode->left);
        if(parentNode->right) q.push(parentNode->right);
    }
    return sum;
}
int main() {
    Node* root = inputTree();
    int result = sumOfWithoutLeafNode(root);
    cout << result << endl;
    return 0;
}