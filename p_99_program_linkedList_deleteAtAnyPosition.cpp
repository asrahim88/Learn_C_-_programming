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

void insertAtAnyPosition(Node* head, int idx, int val){
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i =1; i<idx; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}
void insertTail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    Node* temp = tail;
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    temp->next = newNode;
    newNode->prev = temp;
    tail = newNode;
}

void deleteAtHead(Node* &head,Node* &tail){
    Node* deleteNode = head;
    head = head->next;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;
    delete deleteNode;
}
void deleteAtAnyPosition(Node* head, int idx){
    Node* temp = head;
    for(int i=1; i<idx; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}
void deleteAtTail(Node* &head, Node* &tail){
    Node* deleteNode = tail;
    tail = tail->prev;
    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;
    delete deleteNode;
}

int countNode(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void forwardPrintNode(Node* head){
    Node* temp = head;
    while(temp !=NULL){
        cout << temp->val <<" ";
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
        int val;
        cin >> val;
        if(val == -1) break;
        insertTail(head, tail, val);
    }
    cout << "after insert at tail forward: ";
    forwardPrintNode(head);
    cout << "after insert at tail backward: ";
    backwardPrintNode(tail);
    
    insertAtHead(head, tail, 999);
    cout << "after insert at head forward: ";
    forwardPrintNode(head);
    cout << "after insert at head backward: ";
    backwardPrintNode(tail);
    
    insertAtAnyPosition(head, 3, 33333);
    cout << "after insert at 3position forward: ";
    forwardPrintNode(head);
    cout << "after insert at 3position backward: ";
    backwardPrintNode(tail);

    deleteAtTail(head, tail);
    cout << "after delete at tail forward: ";
    forwardPrintNode(head);
    cout << "after delete at tail backward: ";
    backwardPrintNode(tail);
    
    deleteAtHead(head, tail);
    cout << "after delete at head forward: ";
    forwardPrintNode(head);
    cout << "after delete at head backward: ";
    backwardPrintNode(tail);
    
    deleteAtAnyPosition(head, 3);
    cout << "after delete 3 position forward: ";
    forwardPrintNode(head);
    cout << "after delete 3 position backward: ";
    backwardPrintNode(tail);
    return 0;
}