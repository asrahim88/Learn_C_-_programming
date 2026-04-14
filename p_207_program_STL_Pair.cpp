#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // pair<string,int> student;
    // student.first = " Abdur Rahim";
    // student.second = 50;


    // pair<string,int> student = make_pair("Abdur Rahim", 50);
    // cout << student.first << " " << student.second;

    // pair<string,int> student = {"Abdur Rahim", 500};
    // string name = student.first;
    // int number = student.second;
    // cout<< name << " : " << number;

    // pair<string,int> student1 = make_pair("Muhib khan", 100);
    // auto [name, number] = student1;
    // cout << name << " :" << number;

    // cout << endl;
    // pair<string, int> student2 = {"Abdur Rahim", 45};
    // auto [name1, number1] = student2;
    // cout << name1 << " " << number1 << endl;


    // pair<string, int> student3;
    // student3.first = "farhan ishrak";
    // student3.second = 456;

    // auto [name2, number2] = student3;
    // cout << name2 << ": " << number2 << endl;

    // pair<string,  int> student4 = make_pair("fahmin", 78);

    // cout << student4.first << " " << student4.second << endl;

    // int n;
    // cin >> n;
    // pair<string, int> students[n];

    // for(int i=0; i<n; i++){
    //     cin >> students[i].first >> students[i].second;
    // }
    
    // for(auto [x, y]: students){
    //     cout << x << " : " << y << endl;
    // }

    // for(auto x : students){
    //     cout << x.first << " " << x.second << endl;
    // }


    int n;
    cin >> n;
    vector<pair<string,int>> students(n);
    for(int i=0; i<n ;i++){
        cin >> students[i].first >> students[i].second;
        // cin.ignore();
    }

    for(pair<string,int> box : students){
        cout << box.first << ": " << box.second << endl;
    }
    return 0;
}
