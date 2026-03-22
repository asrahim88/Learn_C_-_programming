#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> v;
    /*
    cout << v.size() << endl;
    // v[0]=10; this is wrong 
    cout << v.size() << endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    cout << v.size() << endl;
    cout << v[2] << endl;
    cout << v.empty() << endl;
    if(v.empty())
        cout << "this is empty" <<endl;
    else 
        cout << "This is not empty." << endl;
    v.clear();
    cout << v.size() << endl;
    cout << v.empty() << endl;
    if(v.empty())
        cout << "Empty" << endl;
    else 
        cout << "Not Empty" << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    v.pop_back();
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    cout << "Front of vector: "<< v.front() << endl;
    cout << "Back of vector: "<< v.back() << endl;
    cout << "Front of vector: " << v[0] << endl;
    cout << "vector element show using range: " << endl;
    for(int child: v){
        cout << child << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    // v.pop_back();
    // cout << "End of the vector: " << v.back() << endl;
    cout << "Vector size: " << v.size() << endl;
    // cout << "Vector Capacity: " <<  v.capacity() << endl;
    cout << "Vector Back: "<< v.back() << endl;

    v.push_back(300);
    v.push_back(400);
    v.push_back(500);
    */
    cout << "vector size: " << v.size() << endl;
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    v.push_back(400);
    v.push_back(500);
    v.push_back(600);
    v.push_back(700);
    v.push_back(800);
    v.push_back(900);
    cout << v.size() << endl;
    for(int i =0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
    cout << "Testing index 0: "<< v[0] << endl;
    cout << "Testing index 0: "<< v.at(0) << endl;
    v.erase(v.begin()+2, v.begin()+4);
    for(int child: v)
        cout << child << " ";
    cout << endl;

    v.erase(v.begin()+2);
    for(int child: v){
        cout << child << " ";
    }
    cout << endl;
    v.insert(v.begin()+3, 2000);
    for(int child: v)
        cout << child << " ";
    cout << endl;

    sort(v.begin(), v.end());
    for(int child: v)
        cout << child << " ";
    cout << endl;

    v.insert(v.begin()+2, 5, 999);
    for(int child: v)
        cout << child << " ";
    cout << endl;

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);

    for(int child: v2)
        cout << child << " ";
    cout << endl;

    swap(v, v2);

    cout << "After swapping " << endl;
    for(int child: v)
        cout << child << " ";
    cout << endl;
    for(int child: v2)
        cout << child << " ";
    cout << endl;

    reverse(v.begin(), v.end());
    for(int child: v)
        cout << child << " ";
    cout << endl;

    v.insert(v.begin()+0, 50);
    v.insert(v.begin()+ 1, 44);
    v.insert(v.begin()+5, 33);
    for(int child: v)
        cout << child << " ";
    cout << endl;

    

    return 0;
}