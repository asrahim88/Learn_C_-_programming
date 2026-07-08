#include <bits/stdc++.h>
using namespace std;
int n, e;
class Edge{
    public:
        int a, b;
        long long c;
        Edge(int a, int b,long long int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
};

vector<Edge> edgeList;
long long int distanceArray[1005];

void bellMonFord(int src){
    for(int i=1; i<=n; i++){
        distanceArray[i] = LLONG_MAX;
    }
    distanceArray[src] = 0;
    for(int i =1; i<=n-1; i++){
        for(Edge ed: edgeList){
            int a = ed.a;
            int b = ed.b;
            long long int c = ed.c;

            if( distanceArray[a] != LLONG_MAX && distanceArray[a] + c < distanceArray[b]){
                distanceArray[b] = distanceArray[a] + c;
            }
        }
    }
}

bool negativeCycleDetect(){
    for(Edge ed: edgeList){
        int a = ed.a;
        int b = ed.b;
        long long int c = ed.c;

        if(distanceArray[a] != LLONG_MAX && distanceArray[a] + c < distanceArray[b]){
            return true;
        }
    }
    return false;
}

int main() {
    cin >> n >> e;

    while(e--){
        int a, b;
        long long c;
        cin >> a >> b >> c;
        edgeList.push_back(Edge(a,b,c));
    }
    
    int src;
    cin >> src;

    bellMonFord(src);
    

    int t;
    cin >> t;

    while(t--){
          
        int distance;
        cin >> distance;
        if(negativeCycleDetect()){
            cout << "Negative Cycle Detected" << endl;
        return 0;
        }
        if(distanceArray[distance] == LLONG_MAX){
            cout << "Not Possible" <<endl;
        }else {
            cout << distanceArray[distance] << endl;
        }
        
    }
    return 0;
}
