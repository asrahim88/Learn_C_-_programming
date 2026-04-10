#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int array[n];
    for(int i=0; i<n;i++){
        cin >> array[i];
    }

    bool visited[105];
    memset(visited, false, sizeof(visited));

    for(int i=0;i<n; i++){
        visited[array[i]] = true;
    }

    int count =0;
    for(int i=0;i <x; i++){
        if(visited[i] == false){
            count++;
        }
    }
    if(visited[x] == true){
        count++;
    }
    cout << count << endl;
    
    return 0;
}