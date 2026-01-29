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
        cin >> l>> r;
        
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
void printLeafNodeDescendingOrder(Node* root){
    queue<Node*> q;
    if(root) q.push(root);
    vector<int> v;
    while (!q.empty())
    {
        Node* parentNode = q.front();
        q.pop(); 

        if(parentNode->left == NULL && parentNode->right  == NULL){
            v.push_back(parentNode->val);
        }

        if(parentNode->left) q.push(parentNode->left);
        if(parentNode->right) q.push(parentNode->right);
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i =0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}
int main() {
    Node* root = inputTree();
    printLeafNodeDescendingOrder(root);
    return 0;
}