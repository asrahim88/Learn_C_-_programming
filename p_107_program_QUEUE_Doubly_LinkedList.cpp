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
class DoublyQue{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;
    void push(int val){
        sz++;
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
    void pop(){
        sz--;
        Node* deleteNode = head;
        head = head->next;
        if(head==NULL){
            tail = NULL;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        return head == NULL;
    }
};
int main() {
    DoublyQue que;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        que.push(val);
    }
    cout << que.front() << " " << que.back() << " " << que.size() << " ";
    que.pop();
    cout << endl;
    cout << que.front() << " " << que.back() << " " << que.size() << " ";
    return 0;
}