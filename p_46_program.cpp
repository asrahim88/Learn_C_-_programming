#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;
};

int main() {
    int N;
    cin >> N;
    
    Student info[N];
    char secAray[N];
    for(int i =0; i<N; i++) {
        cin >> info[i].nm >> info[i].cls >> info[i].s >> info[i].id;
        secAray[i] = info[i].s;
    }
    reverse(secAray, secAray+N);
    for(int i =0; i<N; i++) {
        info[i].s = secAray[i];
    }
    for(int i =0; i<N; i++) {
        cout << info[i].nm << " " <<  info[i].cls << " " << info[i].s << " " <<  info[i].id << endl;
    }
    return 0;
}