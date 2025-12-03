#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;

};

bool cmp(Student l, Student r) {
    if(l.math_marks + l.eng_marks > r.math_marks + r.eng_marks) {
        return true;
    }else if(l.math_marks + l.eng_marks < r.math_marks + r.eng_marks) {
        return false;
    }else {
        if(l.id<r.id) {
            return true;
        }else {
            return false;
        }
    }
}
int main() {
    int N;
    cin >> N;
    
    Student info[N];

    for(int i =0; i<N; i++) {
        cin >> info[i].nm >> info[i].cls >> info[i].s >> info[i].id >> info[i].math_marks >> info[i].eng_marks;
    }

    sort(info, info+N, cmp);

    for(int i =0; i<N; i++) {
        cout << info[i].nm << " " << info[i].cls << " " << info[i].s << " " << info[i].id << " " << info[i].math_marks << " " << info[i].eng_marks << endl;
    }
    return 0;
}