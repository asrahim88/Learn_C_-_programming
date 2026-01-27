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
void preOrderTraversal(Node* root){
    if(root == NULL) return;
    cout << root->val << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    if(root == NULL) return;
    inOrderTraversal(root->left);
    cout << root->val << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root == NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->val << " ";
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* parentNode = q.front();
        q.pop();

        cout << parentNode->val << " ";

        if(parentNode->left) q.push(parentNode->left);
        if(parentNode->right) q.push(parentNode->right);
    }
}
int treeNodeCountDepthWise(Node* root){
    if(root == NULL) return 0;
    int l = treeNodeCountDepthWise(root->left);
    int r = treeNodeCountDepthWise(root->right);
    int total = l + r + 1;
    return total;
}
int treeNodeContLevelWise(Node* root){
    queue<Node*> q;
    if(root) q.push(root);
    int countNode = 0;
    while(!q.empty()){
        Node* parentNode = q.front();
        q.pop();

        countNode++;
        
        if(parentNode->left) q.push(parentNode->left);
        if(parentNode->right) q.push(parentNode->right);
    }
    return countNode;
}

int leafNodeCountDepthWise(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    int l = leafNodeCountDepthWise(root->left);
    int r = leafNodeCountDepthWise(root->right);
    int total = l + r;
    return total;
}
int leafNodeCountLevelWise(Node* root){
    queue<Node*> q;
    if(root) q.push(root);
    int countNode = 0;
    while(!q.empty()){
        Node* parentNode = q.front();
        q.pop();

        if(parentNode->left == NULL && parentNode->right == NULL){
            countNode++;
        }

        if(parentNode->left) q.push(parentNode->left);
        if(parentNode->right) q.push(parentNode->right) ;
    }
    return countNode;
}
bool searchingNode(Node* root, int val){
    if(root == NULL) return false;
    if(root->val == val) return true;
    bool  l = searchingNode(root->left, val);
    bool r = searchingNode(root->right, val);
    return l || r;
}

int maxHeight(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    int total = max(l, r)+1;
    return total;
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
    cout << "Tree Node Count Depth Wise: ";
    cout << treeNodeCountDepthWise(root) << endl;
    cout << "Tree Node Count Level Wise: ";
    cout << treeNodeContLevelWise(root) << endl;
    cout << "Leaf Node Count Depth Wise: ";
    cout << leafNodeCountDepthWise(root) << endl;
    cout << "Leaf Node Count Level Wise: ";
    cout << leafNodeCountLevelWise(root) << endl;
    cout << "Max Height of this tree: ";
    cout << maxHeight(root) << endl;
    cout << "Enter the searching value in tree: ";
    int val;
    cin >> val;
    bool result = searchingNode(root, val);
    result == true ? cout << "True" : cout << " false";
    return 0;
}