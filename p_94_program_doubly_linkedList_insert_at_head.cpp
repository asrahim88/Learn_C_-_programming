#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val){
            this->next = NULL;
            this->prev = NULL;
            this->val = val;
        }
};

void insertAtHead(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}
void forwardPrintNode(Node* head){
    Node* temp = head;
    while(temp !=NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}
void reversPrintNode(Node* tail){
    Node* temp = tail;

    while(temp !=tail){
        cout << temp->val << " ";
        temp = temp->prev;
    }
}
int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    // Node* head = NULL;
    // Node* tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 100);
    forwardPrintNode(head);
    return 0;
}