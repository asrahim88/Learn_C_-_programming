#include <bits/stdc++.h>
using namespace std;
class StudentInfo {
    public:
    string name;
    int marks;
    int age;
    int roll;
    string subject;
};
int main() {
    int N;
    cin >> N;
    StudentInfo info[N];
    for(int i =0; i<N; i++) {
        cin.ignore();
        getline(cin, info[i].name);
        cin.ignore();
        getline(cin, info[i].subject);
        cin >>info[i].marks >> info[i].age >> info[i].roll;
       
    }

    for(int i =0; i<N; i++) {
        cout << info[i].name << " " << info[i].marks << " " << info[i].age << " " << info[i].roll << " " << info[i].subject << endl;
    }
    return 0;
}