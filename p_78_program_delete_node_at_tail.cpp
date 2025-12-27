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

void insertAtTail(Node* &head, Node* &tail, int val){
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

void reveresPrintNode(Node* head){
    if(head == NULL){
        return;
    }

    reveresPrintNode(head->next);
    cout << head->val << " ";
}

void deleteNodeAtHead(Node* &head){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void deleteNodeAtAnyPosition(Node* head, int idx){
    Node* temp = head;

    for(int i =1; i<idx; i++){
        temp= temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
void deleteNodeAtTail(Node* head, Node* &tail){
    Node* temp = head;

    while(temp->next->next !=NULL){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = NULL;
    delete deleteNode;
    tail = temp;
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        int x; 
        cin >> x;
        if(x == -1) break;
        insertAtTail(head, tail, x);
    }
    printNode(head);
    cout << endl;
    reveresPrintNode(head);
    cout << endl;

    insertAtHead(head, 777);
    printNode(head);
    cout << endl;
    reveresPrintNode(head);
    cout << endl;

    insertAtAnyPosition(head, 1, 888);
    printNode(head);
    cout << endl;
    reveresPrintNode(head);
    cout << endl;


    deleteNodeAtHead(head);
    printNode(head);
    cout << endl;
    reveresPrintNode(head);
    cout << endl;

    deleteNodeAtAnyPosition(head, 4);
    printNode(head);
    cout << endl;
    reveresPrintNode(head);
    cout << endl;
    // deleteNodeAtAnyPosition(head, 4);
    // printNode(head);
    // cout << endl;
    // reveresPrintNode(head);
    // cout << endl;

    deleteNodeAtTail(head, tail);
    printNode(head);
    cout << endl;
    reveresPrintNode(head);
    cout << endl;
    return 0;
}