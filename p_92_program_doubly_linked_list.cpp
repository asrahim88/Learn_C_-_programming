#include <bits/stdc++.h>
using namespace std;
class Node {
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

void printNode(Node* head){
    Node* temp = head;
     
    while (temp != NULL)
    {   cout << temp->val << " ";
        temp = temp->next;
    }
    
}
int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    printNode(head);

    return 0;
}