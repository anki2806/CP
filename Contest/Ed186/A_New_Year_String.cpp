#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    int ans = 4;
    
    
        for(int i = 0; i < n - 3; i++) {
            int count = 4;
            
            if(s[i] == '2') {
                count--;
            }
            if(s[i + 1] == '0') {
                count--;
            }
            if(s[i + 2] == '2') {
                count--;
            }
            if(s[i + 3] == '6') {
                count--;
            }
            if(count == 0) {
                cout<<"0\n";
                return;
            }
        }
    
        for(int i = 0; i < n - 3; i++) {
            int count = 4;
            
            if(s[i] == '2') {
                count--;
            }
            if(s[i + 1] == '0') {
                count--;
            }
            if(s[i + 2] == '2') {
                count--;
            }
            if(s[i + 3] == '5') {
                count--;
            }
            if(count == 0) {
                cout<<"1\n";
                return;
            }
        }
        cout<<"0\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//   sieve(); // Uncomment if you need primes

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}