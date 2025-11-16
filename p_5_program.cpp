#include<iostream>
using namespace std;
int main() {
    int x;
    cin >> x;

    switch(x%2) {
        case 0:
            cout << "even\n";
            break;
        case 1:
            cout << "odd\n";
            break;;
        default:
            cout << "wrong input\n";
            break;
    }

    char c;
    cin >> c;
    switch(c){
        case 'a':
            cout << "Vowel\n";
            break;
        case 'e':
            cout << "Vowel\n";
            break;
        case 'i':
            cout << "vowel\n";
            break;
        case 'o':
            cout << "vowel\n";
            break;
        case 'u':
            cout << "vowel\n";
            break;
        case 'A':
            cout << "Vowel\n";
            break;
        case 'E':
            cout << "Vowel\n";
            break;
        case 'I':
            cout << "vowel\n";
            break;
        case 'O':
            cout << "vowel\n";
            break;
        case 'U':
            cout << "vowel\n";
            break;
        default:
            cout << "Consonant";
            break;
    }
    return 0;
}