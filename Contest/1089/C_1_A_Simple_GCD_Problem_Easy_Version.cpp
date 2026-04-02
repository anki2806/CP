#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    int n;
    cin>>n;
    vector<ll> a(n, 0);
    vector<ll> b(n, 0);
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++) {
        cin>>b[i];
    }

    int count = 0;

    if(a[0] != gcd(a[0], a[1])) {
        count++;
    }
    for(int i = 1; i < n - 1; i++) {
        ll l = lcm(gcd(a[i], a[i - 1]), gcd(a[i], a[i + 1]));
        if(l != a[i]) {
            count++;
        }
    }
    if(a[n - 1] != gcd(a[n - 1], a[n - 2])) {
        count++;
    }
    cout<<count<<"\n";
}

int main() {
    ANKIT
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}