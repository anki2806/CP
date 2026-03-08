#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(n <= 2) {
        cout<<"1\n";
        return;
    }

    int ans = 0;
    if(s[0] == '0' && s[1] == '0') {
        s[1] = '1';
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            count++;
            if(count == 3) {
                s[i] = '1';
                count = 0;
            }
        }
        else {
            count = 0;
        }
    }
    if(s[n - 1] == '0' && s[n - 2] == '0') {
        s[n - 2] = '1';
    }
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            ans++;
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ANKIT

//   sieve(); // Uncomment if you need primes

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}