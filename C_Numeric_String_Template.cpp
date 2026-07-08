#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i=0;i<n; i++){
            cin >> v[i];
        }

        int m;
        cin>> m;

        while(m--){
            string str;
            cin >>str;

            if(str.size() != n){
                cout << "NO" <<endl;
                continue;
            }

            map<int, char> numMP;
            map<char, int> chrMp;

            bool flag = true;

            for(int i=0;i<n; i++){
                int num = v[i];
                char chr = str[i];

                if(numMP.count(num)){
                    if(numMP.count(num) != chr){
                        flag = false;
                        break;
                    }else {
                        numMP[num] = chr;
                    }
                }
                if(chrMp.count(chr)) {
                    if(chrMp[chr] != num){
                        flag = false;
                        break;
                    }
                }
            }
            if(flag == true){
                cout << "YES" << endl;
            }else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m;
        cin >> m;

        while (m--) {
            string s;
            cin >> s;

            // Step 1: length check
            if (s.length() != n) {
                cout << "NO\n";
                continue;
            }

            map<long long, char> num_to_char;
            map<char, long long> char_to_num;

            bool flag = true;

            for (int i = 0; i < n; i++) {
                long long num = a[i];
                char ch = s[i];

                // number -> char
                if (num_to_char.count(num)) {
                    if (num_to_char[num] != ch) {
                        flag = false;
                        break;
                    }
                } else {
                    num_to_char[num] = ch;
                }

                // char -> number
                if (char_to_num.count(ch)) {
                    if (char_to_num[ch] != num) {
                        flag = false;
                        break;
                    }
                } else {
                    char_to_num[ch] = num;
                }
            }

            if (flag == true)
                cout << "YES\n";
            else 
                cout << "NO\n";
        }
    }

    return 0;
}
*/