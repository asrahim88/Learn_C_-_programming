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
        return ;
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
void reversePrintNode(Node* head){
    if(head == NULL){
        return;
    }

    reversePrintNode(head->next);
    cout << head->val << " ";
}

void deleteAtHead(Node* &head){
    Node* deleteNode= head;
    head = deleteNode->next;
    delete deleteNode;
}

void deleteAtAnyPosition(Node* head, int idx){
    Node* temp = head;

    for(int i =1; i<idx; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        int val;
        cin >> val;

        if(val == -1){
            break;
        }
        insertAtTail(head, tail, val);
    }

    printNode(head);
    cout << endl;
    reversePrintNode(head);
    cout << endl;
    insertAtHead(head, 400);
    insertAtAnyPosition(head, 2, 500);
    printNode(head);
    cout << endl;
    reversePrintNode(head);
    cout << endl;
    deleteAtHead(head);
    printNode(head);
    cout << endl;
    reversePrintNode(head);
    cout << endl;
    deleteAtAnyPosition(head, 2);
    printNode(head);
    return 0;
}