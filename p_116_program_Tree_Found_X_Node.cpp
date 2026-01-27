#include<bits/stdc++.h>
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

        if(l== -1) myLeft = NULL;
        else myLeft = new Node(l);
        
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

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

int countTreeNodeDepthWise(Node* root){
    if(root== NULL) return 0;
    int l = countTreeNodeDepthWise(root->left);
    int r = countTreeNodeDepthWise(root->right);
    int total = l + r + 1;
    return total;
}
int countTreeNodeLevelWise(Node* root){
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

int depthWiseLeafNodeCount(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    int l = depthWiseLeafNodeCount(root->left);
    int r = depthWiseLeafNodeCount(root->right);
    int total = l + r;
    return total;
}
int levelWiseLeafNodeCount(Node* root){
    queue<Node*> q;
    if(root) q.push(root);
    int countNode = 0;

    while (!q.empty())
    {
        Node* parentNode = q.front();
        q.pop();
        if(parentNode->left == NULL && parentNode->right == NULL) countNode++;
        if(parentNode->left) q.push(parentNode->left);
        if(parentNode->right) q.push(parentNode->right);
    }
    return countNode;
}
bool isNodePresent(Node* root, int x){
    if(root == NULL) return false;
    if(root->val == x) return true;
    bool l = isNodePresent(root->left , x);
    bool r = isNodePresent(root->right, x);
    return l || r;
}
int main() {
    Node* root = inputTree();
    cout << "Pre Order Traversal: ";
    preOrderTraversal(root);
    cout<< endl;
    cout << "In Order Traversal: ";
    inOrderTraversal(root);
    cout<< endl;
    cout << "Post Order Traversal: ";
    postOrderTraversal(root);
    cout<< endl;
    cout << "Level Wise Traversal: ";
    levelOrderTraversal(root);
    cout<< endl;
    cout << "Cont Tree Node Level Wise: ";
    cout << countTreeNodeLevelWise(root);
    cout<< endl;
    cout << "Cont Tree Node Depth Wise: ";
    cout << countTreeNodeDepthWise(root);
    cout<< endl;
    cout << "Cont Leaf Node Depth Wise: ";
    cout << depthWiseLeafNodeCount(root);
    cout<< endl;
    cout << "Cont Leaf Node Level Wise: ";
    cout << levelWiseLeafNodeCount(root);
    cout<< endl;

    cout << "Enter the Searching Node value: ";
    int x;
    cin >> x;

    bool result = isNodePresent(root, x);
    if(result) cout << "True";
    else cout << "False";
    return 0;
}