#include <bits/stdc++.h>
using namespace std;
class StudentInfo{
    public:
    string name;
    int roll;
    string subject;
    float marks;
};
int main() {
    int N;
    cin >> N;
    StudentInfo info[N];

    for(int i =0; i<N; i++) {
        cin >> info[i].name >> info[i].roll >> info[i].subject >> info[i].marks;
    }

    for(int i =0; i<N; i++) {
        cout << info[i].name << " " << info[i].roll << " " << info[i].subject << " " << info[i].marks << endl;
    }

    StudentInfo mn;
    mn.marks = INT16_MAX;

    for(int i=0; i<N; i++) {
        if(info[i].marks < mn.marks) {
            mn = info[i];
        }
    }

    cout << "TESTING" << endl;
    cout << mn.name << " " << mn.roll << " " << mn.subject << " " << mn.marks << endl;
    
    return 0;
}