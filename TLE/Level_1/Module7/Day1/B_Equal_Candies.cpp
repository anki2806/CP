#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    int m = 100000000;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        m = min(v[i], m);
    }
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ans += abs(m - v[i]);
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