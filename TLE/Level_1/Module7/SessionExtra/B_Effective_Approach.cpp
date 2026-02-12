#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, m;
    cin>>n;

    vector<ll> v(n);
    ll ma = 0;
    for(ll i = 0; i < n; i++) {
        cin>>v[i];
        ma = max(ma, v[i]);
    }

    vector<ll> ans1(ma + 5, 0);
    vector<ll> ans2(ma + 5, 0);
    for(ll i = 0; i < n; i++) {
        ans1[v[i]] += i + 1;
        ans2[v[i]] += n - i;
    }

    cin>>m;
    ll sum1 = 0, sum2 = 0;
    vector<ll> q(m, 0);
    for(ll i = 0; i < m; i++) {
        
    }

    cout<<sum1<<" "<<sum2<<"\n";
}

int main() {
    ANKIT

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}