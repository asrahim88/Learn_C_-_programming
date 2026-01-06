#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> doublyLinkedList;
    cout << doublyLinkedList.size() << endl;
    
    list<int> doublyLinkedList1(10);
    cout << doublyLinkedList1.size() << endl;

    list<int> doublyLinkedList2(10, 5);
    for(auto i = doublyLinkedList2.begin(); i!=doublyLinkedList2.end(); i++){
        cout << *i << " "; 
    }
    cout << endl;

    for(int i : doublyLinkedList2){
        cout << i << " ";
    }
    list<int> doublyLinkedList3(doublyLinkedList2);
        cout << endl;
    for(int i: doublyLinkedList3){
        cout << i << " ";
    }
    cout << endl;

    list<int> doublyLinkedList4 = {10,20,30,40,50,60,70,80,90,100};
    for(int it : doublyLinkedList4){
        cout << it << " ";
    }
    cout << endl;

    int aray[] = {10,20,30,40,50,60};
    list<int> doublyLinkedList5(aray, aray+6);

    for(int val: doublyLinkedList5){
        cout << val << " ";
    }
    cout << endl;

    vector<int> v = {10,20,30,40,50,60,70,80,90,100};
    list<int> doublyLinkedList6(v.begin(), v.end());
    for(int val: doublyLinkedList6){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}