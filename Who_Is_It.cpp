#include<bits/stdc++.h>
using namespace std;
class Student_info {
    public:
    int ID;
    char name[100];
    char section;
    int total_marks;
};

int main() {
    
   int T;
   cin >> T;
   for(int i =0; i<T; i++) {
        int mx_marks = -1000;
        Student_info topper; 
        for(int i = 0; i<3; i++) {
            Student_info tempStu;
                cin >> tempStu.ID >> tempStu.name >> tempStu.section>> tempStu.total_marks;

                if(tempStu.total_marks > mx_marks){
                    topper = tempStu;
                    mx_marks = tempStu.total_marks;
                }else if(mx_marks == tempStu.total_marks) {
                    if(tempStu.ID<topper.ID){
                        topper = tempStu;
                    }
                }
            }
            cout << topper.ID << " " << topper.name << " " << topper.section << " " << topper.total_marks << endl;
   }
    return 0;
}