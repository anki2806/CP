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
    vector<ll> c(n);

    for(int j = 0; j < n; j++) {
        cin>>a[j];
    }
    for(int j = 0; j < n; j++) {
        cin>>b[j];
    }
    for(int j = 0; j < n; j++) {
        cin>>c[j];
    }

    ll count = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        bool first = true;
        for(int j = 0; j < n; j++) {
            if(b[j] <= a[(j + i)%n]) {
                first = false;
            }
        }

        if(first) {
            count += n;
        }
    }
    // cout<<count<<" ";
    for(int i = 0; i < n; i++) {
        bool first = true;
        for(int j = 0; j < n; j++) {
            if(c[j] <= b[(j + i) % n]) {
                first = false;
            }
        }

        if(first) {
            ans += count;
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