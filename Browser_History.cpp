#include<bits/stdc++.h>
using namespace std;
int main(){
    list<string> webAddress;
    while(true){
        string str;
        cin >> str;

        if(str == "end")
            break;
        webAddress.push_back(str);
    }

    int Q;
    cin >> Q;

    auto currentPosition = webAddress.begin();
    
    while(Q--){
        string command;
        cin >> command;

        if(command == "visit"){
            string address;
            cin >> address;

            int flag = 0;
            for(auto it = webAddress.begin(); it !=webAddress.end(); it++){
                if(*it == address){
                    currentPosition = it;
                    cout << *currentPosition << endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                cout << "Not Available" << endl;                
            }
        }else if(command == "next"){
            auto nxt = currentPosition;
            nxt++;
            if(nxt != webAddress.end()){
                currentPosition = nxt;
                cout << *currentPosition << endl;
            }else {
                cout << "Not Available" << endl;
            }
        }else if(command == "prev"){
            if(currentPosition != webAddress.begin()){
                currentPosition--;
                cout << *currentPosition << endl;
            }else{
                cout << "Not Available" << endl;
            }
        }
    }
}

















































































































































































































































/*#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string> webAddress;
    
    
    while (true) {
        string str;
        cin >> str;

        if (str == "end") break;
        webAddress.push_back(str);
    }

    int Q;
    cin >> Q;

    
    auto currentPosition = webAddress.begin();

    while (Q--) {
        string command;
        cin >> command;

        if (command == "visit") {
            string address;
            cin >> address;

            bool flag = false;
            for (auto it = webAddress.begin(); it != webAddress.end(); it++) {
                if (*it == address) {
                    currentPosition = it;
                    cout << *currentPosition << endl;
                    flag = true;
                    break;
                }
            }

            if (flag==false) {
                cout << "Not Available" << endl;
            }
        }

        else if (command == "next") {
            auto nxt = currentPosition;
            nxt++;
            if (nxt != webAddress.end()) {
                currentPosition = nxt;
                cout << *currentPosition << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }

        else if (command == "prev") {
            if (currentPosition != webAddress.begin()) {
                currentPosition--;
                cout << *currentPosition << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
*/