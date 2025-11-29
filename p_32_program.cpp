#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int ID;
    char section;

    Student(string name, int ID, char section) {
        this->name = name;
        this->ID = ID;
        this->section = section;
    }
};

Student* info() {
    Student *p = new Student("Abdur Rahim", 101, 'A');
    return p;
}
int main() {
    Student *result = info();

    cout << result->name << endl;
    cout << result->ID << endl;
    cout << result->section << endl;
    return 0;
}