#include <bits/stdc++.h>
using namespace std;

int main() {
    // int n;
    // cin >> n;
    // tuple<string,int, string> students[n];

    // for(int i=0; i<n; i++){
    //     cin >> get<0>(students[i]) 
    //         >> get<1>(students[i]) 
    //         >> get<2>(students[i]);
    // }

    // for(auto [name, roll, phone] : students){
    //     cout << name << " " << roll << " " << phone << endl;
    // }

    tuple<string,int, string> students = {"Abdur Rahim", 101, "0126456643"};
    cout << get<0>(students) << ": " << get<1>(students) <<": " << get<2>(students) << endl;

    string name = get<0>(students);
    int roll = get<1>(students);
    string phone = get<2>(students);

    cout << name << " " << roll << " " << phone << endl;

    auto [name1, roll1, phone1] = students;
    cout << name1 << " " << roll1 << " " << phone1 << endl;

    get<0>(students) = "Munim Shahriar";
    get<1>(students) = 1111;
    get<2>(students) = "01234567897";

    auto [name2, roll2, phone3] = students;
    cout << name2 << roll2 << phone3 << endl;

    return 0;
}