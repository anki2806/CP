#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

ll gcd(ll a, ll b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a,b)) * b;
}

void solve() {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    ll first = (b / c) - ((a - 1) / c);
    ll second = (b / d) - ((a - 1) / d);

    ll div = lcm(c, d);
    ll ans = (b / div) - ((a - 1) / div);

    ans = (b - a + 1) - (first + second) + ans;
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}