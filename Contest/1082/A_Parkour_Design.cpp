#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);
bool recur(ll i, ll j, ll x, ll y) {
    if(i > x) {
        return false;
    }
    if(i == x && j == y) {
        return true;
    }
    bool one = recur(i + 2, j + 1, x, y);
    bool two = recur(i + 3, j, x, y);
    bool three = recur(i + 4, j - 1, x, y);
    return one || two || three;
}
void solve() {
    ll x, y;
    cin>>x>>y;

    if(abs(y) > x || abs(y) > 100000 || y < -100000) {
        cout<<"NO\n";
        return;
    }
    if(x <= 1) {
        cout<<"NO\n";
        return;
    }
    bool ans = recur(0LL, 0LL, x, y);
    if(ans) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
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