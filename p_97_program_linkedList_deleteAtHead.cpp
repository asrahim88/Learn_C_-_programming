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

void insertAtAnyPosition(Node* head, int idx, int val){
    Node* newNode = new Node(val);
    Node* temp = head;

    for(int i =1; i<idx;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
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
void deleteAtHead(Node* &head, Node* &tail){
    Node* temp = head;
    head = temp->next;
    delete temp;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
void forwardPrintNode(Node* head){
    Node* temp = head;
    while(temp != NULL){
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

    while(true){
        int val;
        cin >> val;

        if(val == -1) break;
        insertAtTail(head, tail, val);
    }

    forwardPrintNode(head);
    backwardPrintNode(tail);
    cout << "Please enter the position: ";
    int idx;
    cin >> idx;
    
    int totalNode = countNode(head);
    if(idx >= totalNode){
        cout << "Invalid Position" << endl;
    }else { 
        cout << "Enter the value: ";
        int val;
        cin >> val;
    
        insertAtAnyPosition(head, idx, val);
        forwardPrintNode(head);
        backwardPrintNode(tail);
    }

    deleteAtHead(head, tail);
    forwardPrintNode(head);
    backwardPrintNode(tail);

    return 0;
}