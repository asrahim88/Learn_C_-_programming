#include <bits/stdc++.h>
using namespace std;
class StudentInfo{
    public:
    string name;
    int roll;
    char section;
    string subject;
    int marks;
};
bool cmp(StudentInfo l, StudentInfo r) {
    return l.marks < r.marks ? true: false; 
}
int main() {
    int N;
    cin >> N;
    
    StudentInfo info[N];

    for(int i =0; i<N ;i++){
        cin.ignore();
        getline(cin, info[i].name);
        cin >> info[i].roll >> info[i].section >> info[i].subject >> info[i].marks;
    }

    sort(info, info+N, cmp);

    for(int i =0; i<N; i++) {
        cout << info[i].name << " " << info[i].roll << " " << info[i].section << " " << info[i].subject << " " << info[i].marks << endl;
    }

    
    return 0;
}