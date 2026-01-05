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
void insertAtTail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void deleteAtHead(Node* &head,Node* &tail){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;
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
    while(temp !=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void forwardNodePrint(Node* head){
    Node* temp = head;
    while(temp !=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void backwardNodePrint(Node* tail){
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

    while(true){
        int val;
        cin >> val;
        if(val == -1) break;
        insertAtTail(head, tail, val);
    }
    cout << "After tail insert forward print: ";
    forwardNodePrint(head);
    cout << "After tail insert backward print: ";
    backwardNodePrint(tail);

    insertAtHead(head, tail, 500);
    cout << "After head insert forward print: ";
    forwardNodePrint(head);
    cout << "After head insert backword print: ";
    backwardNodePrint(tail);

    cout << "Enter the position: ";
    int idx;
    cin >> idx;

    int quantityNode = countNode(head);
    if(idx >= quantityNode){
        cout << "Invalid Position\n";
    }else {
        cout << "Enter the value: ";
        int X;
        cin >> X;
        insertAtAnyPosition(head, idx, X);
        cout << "After insert in any position forward print: ";
        forwardNodePrint(head);
        cout << "After insert in any position backword print: ";
        backwardNodePrint(tail);
    }
    deleteAtHead(head, tail);
    cout << "After delete from the head forward print: ";
    forwardNodePrint(head);
    cout << "After delete from the head backward print: ";
    backwardNodePrint(tail);
    deleteAtTail(head, tail);
    cout << "After delete from the head forward print: ";
    forwardNodePrint(head);
    cout << "After delete from the head backward print: ";
    backwardNodePrint(tail);
    return 0;
}