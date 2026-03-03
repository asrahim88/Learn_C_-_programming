#include <bits/stdc++.h>
using namespace std;
class Edge{
    public:
    int a;
    int b;
    int c;
    
    Edge(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
vector<Edge> edgeList;


int main() {
    int n, e;
    cin >> n >> e;
    while(e--){
        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(Edge(a,b, c));
    }

    cout << "Out put" << endl;
    for(Edge ed : edgeList){
        cout << ed.a << " " << ed.b << " " << ed.c << endl;
    }
    return 0;
}