#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node * next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main() {
    Node *  Head = new Node(10);
    Node *  a = new Node(20);
    Node *  b = new Node(30);
    Node *  c = new Node(40);
    Node *  d = new Node(50);
    
    Head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Node* temp = Head;

    while(temp != NULL) {
        cout << temp->val << " " ;
        temp = temp->next;
    }
    return 0;
}