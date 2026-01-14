#include <bits/stdc++.h>
using namespace std;
class MyQueue{
    public:
        list<int> l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_front();
    }
    int size(){
        return l.size();
    }
    int front(){
        return l.front();
    }
    int back(){
        return l.back();
    }
    bool empty(){
        return l.empty();
    }
};
int main() {
    MyQueue que;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        que.push(val);
    }
    cout << que.front() << " " << que.back() << " " << que.size() << endl;
    que.pop();
    cout << que.front() << " " << que.back() << " " << que.size() << endl;

    while(!que.empty()){
        cout << que.front() << " ";
        que.pop();
    }
    return 0;
}