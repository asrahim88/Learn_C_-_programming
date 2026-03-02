#include <bits/stdc++.h>
using namespace std;

class Edge{
    public:
        int a, b, c;
        Edge(int a,int b,int  c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
};

vector<Edge> EdgeList;
int distanceArray[150];
int n, e;
void bellMonFord(){
    for(int i =0; i<n-1; i++){
        for(Edge ed: EdgeList){
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;

            if(distanceArray[a] != INT_MAX && distanceArray[a]+ c <distanceArray[b]){
                distanceArray[b] = distanceArray[a] + c;
            }
        }
    }
    bool flag = false;
    for(Edge ed: EdgeList){
        int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;

        if(distanceArray[a] != INT_MAX && distanceArray[a]+ c <distanceArray[b]){
            flag = true;
        }
    }
    if(flag)
        cout << "Negative Weighted Cycle Detected" << endl;
    else
        cout << "No Cycle Detected";
}
int main() {
    cin >> n >> e;

    while(e--){
        int a, b, c;
        cin >> a >> b >> c;
        EdgeList.push_back(Edge(a,b,c));
        EdgeList.push_back(Edge(b,a,c));
    }
    for(int i =0; i<n; i++){
        distanceArray[i] = INT_MAX;
    }
    distanceArray[0] = 0;
    bellMonFord();
    return 0;
}