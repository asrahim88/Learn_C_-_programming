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
void getDifference(Node* head){
    Node* temp = head;
    int max = head->val;
    int min = head->val;

    while (temp != NULL)
    {
        if(temp->val > max){
            max = temp->val;
        }
        if(temp->val < min){
            min = temp->val;
        }
        temp = temp->next;
    }

    cout << max- min << endl;
    
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
        insertAtTail(head, tail, val);
    }
    getDifference(head);
    return 0;
}