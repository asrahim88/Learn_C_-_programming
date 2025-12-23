#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void printedNode(Node* head) {
    Node* temp = head;
    
    while(temp !=NULL) {
        cout << temp->val  << " ";
        temp = temp->next;
    }
}
int main() {
    Node* head = new Node(10);
    
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    
    printedNode(head);
    
    return 0;
}