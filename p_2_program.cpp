#include<iostream>
#include<iomanip>

using namespace std;
int main() {
    int a;
    cout << "please enter an integer number: ";
    cin >> a;
    
    float b;
    cout << "Please Enter a float number: ";
    cin >> b;

    char c;
    cout << "Please enter a character: ";
    cin >> c;

    string d;
    cout << "Please Enter your name: ";
    cin >> d;


    cout << a << endl;
    cout << fixed << setprecision(3) << b << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}