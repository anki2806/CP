#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;

    vector<ll> v(n);
    unordered_map<ll, ll> mp;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        ll val = v[i] - i;
        if(mp.count(val)) {
            mp[val]++;
        }
        else {
            mp.insert({val, 1});
        }
    }
    ll ans = 0;
    for(pair<ll, ll> p : mp) {
        // cout<<p.second<<" "<<p.first<<" - ";
        ans += (p.second * (p.second - 1)) / 2;
    }

    cout<<ans<<"\n";
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