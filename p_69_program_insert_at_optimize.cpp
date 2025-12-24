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

void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);

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

void insertAtTail(Node* head,Node* tail, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void printNode(Node* head){
    Node* temp = head;

    while(temp !=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(10);
    Node* tail = head;

    insertAtTail(head,tail, 20);
    insertAtHead(head, 30);
    insertAtAnyPosition(head, 3, 50);
    insertAtAnyPosition(head, 1, 100);
    insertAtTail(head, tail, 500);
    printNode(head);
    return 0;
}