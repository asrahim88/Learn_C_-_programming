#include<iostream>
using namespace std;

int main() {

    int x;
    cin >>x;

    int i = 1;
    int even_count = 0;
    int odd_count = 0;
    while (i<=x)
    {
        i%2==0 ? even_count++ : odd_count++;
        i++;
    }

    cout << "Even is = "<< even_count << endl;
    cout << "Odd is = "<< odd_count << endl;
    
    return 0;
}