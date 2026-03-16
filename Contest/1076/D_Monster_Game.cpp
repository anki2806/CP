#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

int left(int val, vector<int> &v) {

}

int valFind(int s, int e, vector<int> &v) {
    int mid = s + (e - s) / 2;
    while(s <= e) {

    }
}
void solve() {
    int n;
    cin>>n;
    
    vector<ll> s(n);
    vector<ll> m(n);
    
    for(int i = 0; i < n; i++) {
        cin>>s[i];
    }

    for(int i = 0; i < n; i++) {
        cin>>m[i];
    }

    sort(all(s));
    ll ans = 0;

    for(int i = 1; i < n; i++) {
        m[i] += m[i - 1];
    }

    for(int i = 0; i < n; i++) {
        if(m[i] <= n) {
            ans = max(ans, (i + 1) * s[(n - m[i])]);
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