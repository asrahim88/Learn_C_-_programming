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
    if(val == -1){
        root = NULL;
    }else {
        root = new Node(val);
    }

    queue<Node*> q;
    if(root){
        q.push(root);
    }

    while (!q.empty())
    {
        Node* parentNode = q.front();
        q.pop();
        
        int l, r;
        cin >> l >> r;

        Node* myLeft, *myRight;

        if(l==-1){
            myLeft = NULL;
        }else {
            myLeft = new Node(l);
        }

        if(r == -1){
            myRight = NULL;
        }else {
            myRight = new Node(r);
        }

        parentNode->left = myLeft;
        parentNode->right = myRight;

        if(parentNode->left){
            q.push(parentNode->left);
        }
        if(parentNode->right){
            q.push(parentNode->right);
        }
    }
    return root;
}

void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    cout << root->val << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    if(root == NULL){
        return ;
    }
    inOrderTraversal(root->left);
    cout << root->val << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->val << " ";
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* parentNode = q.front();
        q.pop();

        cout <<parentNode->val << " ";

        if(parentNode->left)
            q.push(parentNode->left);
        if(parentNode->right)
            q.push(parentNode->right);
    }
    
}

int levelOrderTreeNodeCount(Node* root){
    queue<Node*> q;
    q.push(root);
    int countNode = 0;
    while(!q.empty()){
        Node* parentNode = q.front();
        q.pop();

        countNode++;
        if(parentNode->left){
            q.push(parentNode->left);
        }
        if(parentNode->right){
            q.push(parentNode->right);
        }
    }
    return countNode;
}
int depthWiseTreeNodeCount(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = depthWiseTreeNodeCount(root->left);
    int r = depthWiseTreeNodeCount(root->right);
    return l+r+1;
}
int main() {
    Node* root = inputTree();
    preOrderTraversal(root);
    cout << endl;
    inOrderTraversal(root);
    cout << endl;
    postOrderTraversal(root);
    cout << endl;
    levelOrderTraversal(root);
    cout << endl;
    cout << "Depth wise count Node: "<<depthWiseTreeNodeCount(root) << endl;
    cout << "Level wise count Node: " << levelOrderTreeNodeCount(root) << endl;
    return 0;
}