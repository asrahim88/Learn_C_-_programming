#include<bits/stdc++.h>
using namespace std;
int main() {
    int *a = new int;
    float *b = new float;
    char *c = new char;
    string *s = new string;
    
    long long *d = new long long int;
    double *e = new double;
    
    cout << "PLease enter a integer value: " <<endl;
    cin >> *a;

    cout << "PLease Enter a float value: " << endl;
    cin >> *b ;

    cout << "Please Enter a character value: " << endl;
    cin >> *c;

    cout << "PLease enter a sring value: " << endl;
    cin >> *s;

    cout << "Please Enter a long long int value: " << endl;
    cin >> *d;

    cout << "PLease Enter a double value: " << endl;
    cin >> *e;

    int *N = new int;
    cin >> *N;
    
    cout << "Integer= " << *a << endl;
    cout << "Float = " << *b << endl;
    cout << "Character = " << *c << endl;
    cout << "String = " << *s << endl;
    cout << "Long long int = " << *d << endl;
    cout << "Double = " << *e << endl;

    cout << "PLease Enter a Size of Array: " << endl;
    int *A = new int[*N];
    for(int i = 0; i<*N; i++) {
        cin >> A[i];
    }

    for(int i = 0; i<*N; i++) {
        cout << A[i] << " ";
    }
    return 0;
}