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

void insertAtTai(Node* &head,Node* &tail, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void removeDuplicateNode(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        Node* previousNode = temp;
        Node* currentNode = temp->next;
        while (currentNode != NULL)
        {
            if(currentNode->val == temp->val){
                previousNode->next = currentNode->next;
                delete currentNode;
                currentNode = previousNode->next;
            }else {
                previousNode = currentNode;
                currentNode = currentNode->next;
            }
        }
        temp = temp->next;
    }
}

void printNode(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if(val==-1){
            break;
        }
        insertAtTai(head, tail, val);
    }
    removeDuplicateNode(head);
    printNode(head);
    
    return 0;
}