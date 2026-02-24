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

    int ans = 1;
    for(int i = 1; i < n; i++) {
        if(s[i] != s[i - 1]) {
            ans++;
        }
    }
    
    if(ans < n && s[0] != s[n - 1]) {
        ans++;
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