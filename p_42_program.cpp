#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
};
int main() {
    int N;
    cin >> N;

    Student info[N];
    for(int i =0; i<N; i++) {
        cin >> info[i].name >> info[i].roll >> info[i].marks ;
    }

    cout << "<--------------------: :-------------------->" << endl;

    for(int i=N-1; i>=0; i--) {
        cout << info[i].name << " " << info[i].roll << " " << info[i].marks << endl;
    }

    return 0;
}