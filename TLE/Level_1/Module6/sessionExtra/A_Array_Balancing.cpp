#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    ll n;
    cin>>n;

    vector<ll> a(n);
    vector<ll> b(n);

    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++) {
        cin>>b[i];
    }

    ll ans = 0;

    for(int i = 1; i < n; i++) {
        ll p = abs(a[i] - a[i - 1]) + abs(b[i] - b[i - 1]);
        ll q = abs(b[i] - a[i - 1]) + abs(a[i] - b[i - 1]);

        if(p > q) {
            ans += q;
        }
        else {
            ans += p;
        }
    }

    cout<<ans<<"\n";
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