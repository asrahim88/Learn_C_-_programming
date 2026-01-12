#include <bits/stdc++.h>
using namespace std;
class myStack{
    public:
    vector<int> v;
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    bool empty(){
        return v.empty();
    }
};
int main() {
    myStack stk;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        stk.push(val);
    }

    while(!stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }
    return 0;
}