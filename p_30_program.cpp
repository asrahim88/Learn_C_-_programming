#include <bits/stdc++.h>
using namespace std;
class Teacher {
    public:
    string name;
    int ID;
    string subject;

    Teacher(string name, int ID, string subject) {
        this->name = name;
        this->ID = ID;
        this->subject = subject;
    }    
};

Teacher info() {
    Teacher imran("Ashik Jama", 101, "Programming");
    return imran;
}
int main() {
    Teacher result = info();
    cout << result.name << endl;
    cout << result.ID << endl;
    cout << result.subject << endl;
    return 0;
}