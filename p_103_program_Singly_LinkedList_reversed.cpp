#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head,Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void insertAtAnyPosition(Node* head, int idx, int val){
    Node* newNode = new Node(val);
    Node* temp = head;

    for(int i =1; i<idx; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head =newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void deleteAtHead(Node* &head){
    if(head == NULL){
        cout << "list is empty" << endl;
        return;
    }
    Node* deleteNode = head;
    head = deleteNode->next;
    delete deleteNode;
}
void deleteAtAnyPosition(Node* head, int idx){
    Node* temp = head;
    for(int i= 1; i<idx; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
}
void deleteAtTail(Node* head, Node* &tail){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next =NULL;
    tail = temp;
    delete deleteNode;
}
void printNodeForward(Node* head){
    Node* temp = head;
    while(temp !=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void backwardPrintNode(Node* temp){
    if(temp == NULL){
        return;
    }
    backwardPrintNode(temp->next);
    cout << temp->val <<" ";
}
void reverseNode(Node* &head, Node* &tail, Node* temp){
    if(temp->next == NULL){
        head = temp;
        return;
    }
    reverseNode(head, tail,temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        // insertAtTail(head, tail, val);
        insertAtHead(head, tail, val);
    }
    printNodeForward(head);
    cout << endl;
    insertAtTail(head, tail, 500);
    insertAtTail(head, tail, 500);
    cout << endl;
    printNodeForward(head);
    insertAtAnyPosition(head, 3, 888880);
    printNodeForward(head);
    backwardPrintNode(head);
    cout << endl;
    deleteAtTail(head, tail);
    printNodeForward(head);
    backwardPrintNode(head);
    cout << endl;
    deleteAtAnyPosition(head, 3);
    printNodeForward(head);
    backwardPrintNode(head);
    cout << endl;
    deleteAtHead(head);
    printNodeForward(head);
    backwardPrintNode(head);
    cout << endl;
    reverseNode(head, tail, head);
    printNodeForward(head);
    backwardPrintNode(head);
    return 0;
}