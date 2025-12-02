#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student l, Student r) {
    // if(l.marks>r.marks) {
    //     return true;
    // }else if(l.marks<r.marks) {
    //     return false;
    // }else {
    //     if(l.roll<r.roll) {
    //         return true;
    //     }else {
    //         return false;
    //     }
    // }
    return l.marks>r.marks ? true : l.roll<r.roll;
}
int main() {
    int N;
    cin >> N;

    Student info[N];

    for(int i=0; i<N; i++) {
        cin >> info[i].name >> info[i].roll >> info[i].marks;
    }
    sort(info, info+N, cmp);
    for(int i=0; i<N; i++) {
        cout << info[i].name << " " << info[i].roll << " " << info[i].marks << endl;
    }
    return 0;
}