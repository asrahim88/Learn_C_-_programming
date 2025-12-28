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

void insertAtHead(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
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
    tail = newNode;
}

void deleteAtAnyPosition(Node* &head, Node* &tail, int idx){
    if(idx == 0){
        Node* deleteNode = head;
        head = deleteNode->next;
        delete deleteNode;
        return;
    }

    Node* temp = head;
    for(int i =1;i <idx; i++){
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    if(deleteNode == tail){
        tail = temp;
    }
    temp->next = deleteNode->next;
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

void printNode(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main() {
    int Q;
    cin >> Q;
    
    Node* head = NULL;
    Node* tail = NULL;

    while(Q--){
        int X, V;
        cin >> X >> V;

        if(X==0){
            insertAtHead(head, tail, V);
        }else if(X==1){
            insertAtTail(head, tail, V);
        }else {
            int nodeNumber = countNode(head);
            if(V<nodeNumber){
                deleteAtAnyPosition(head, tail, V);
            }
        }
        printNode(head);
        cout << endl;
    }
    return 0;
}