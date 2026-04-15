#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> d(n);
    for(int i=0; i<n; i++){
        cin >> d[i];
    }
    
    int serajSum = 0; 
    int dimaSum = 0;

    bool serej= false;
    while(d.size() != 0){
        if(serej == false){
            if(d.front() > d.back()){
                serajSum += d.front();
                d.pop_front();
            }else{
                serajSum += d.back();
                d.pop_back();
            }
            serej = true;
        }else {
            if(d.front() > d.back()){
                dimaSum += d.front();
                d.pop_front();
            }else{
                dimaSum += d.back();
                d.pop_back();
            }
            serej = false;
        }
    }
    cout << serajSum << " " << dimaSum << endl;
    return 0;
}