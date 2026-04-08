#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    long long int N, M, A, B, C;
	    cin >> N >> M >> A >> B >> C;
	    
	    
	    if(N>M){
	        N = N - M;
	        cout << (C*M) + (N * A) << endl;
	    }else if(M>N){
	        M = M-N;
	        cout << (N*C) + (M * B) << endl;
	    }else if(M == N){
	        cout << C * N << endl;
	    }
	}

}
