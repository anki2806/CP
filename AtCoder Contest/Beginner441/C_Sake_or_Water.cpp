#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, k, x;
    cin>>n>>k>>x;
    
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) {
        cin>>v[i];
    }

    sort(all(v), greater<ll>());

    ll ind = n - k;
    ll sum = 0;
    for( ; ind < n && sum < x; ind++) {
        sum += v[ind];
    }
    if(sum < x) {
        cout<<-1<<"\n";
    }
    else {
        cout<<ind<<"\n";
    }
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