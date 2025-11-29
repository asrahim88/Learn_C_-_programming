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
    Student ar_rahim("Abdur Rahim", 101, 'A');
    Student *p = &ar_rahim;
    return p;
}
int main() {
    Student *result = info();
    cout << result->ID << endl;
    cout << result->name << endl;
    cout << result->section << endl;
    return 0;
}