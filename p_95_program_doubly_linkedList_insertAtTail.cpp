#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next; 
        Node* prev;

        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
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
void insertAtTail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
void forwardPrintNode(Node* head){
    Node* temp = head;
    while (temp !=NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void backwardPrintNode(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while (true)
    {
        int x;
        cin >> x;

        if(x == -1) break;
        // insertAtHead(head, tail, x);
        insertAtTail(head, tail, x);
    }
    forwardPrintNode(head);
    backwardPrintNode(tail);
    insertAtTail(head, tail, 500);   
    forwardPrintNode(head);
    backwardPrintNode(tail);
    return 0;
}