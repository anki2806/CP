#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

// Euclidean Algorithm — O(log N)
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// LCM — overflow-safe
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    int n;
    cin>>n;

    ll arr[n];
    ll ans = 0;

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        ans += arr[i] - 1;
    }

    cout<<ans<<"\n";


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