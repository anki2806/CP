#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

// Factorization — O(sqrt N)
vector<ll> get_factors(ll n) {
    vector<ll> facts;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            facts.pb(i);
            if (i * i != n) facts.pb(n / i);
        }
    }
    sort(all(facts));
    return facts;
}

void solve() {
    ll n;
    cin>>n;
    if(n % 2 == 1) {
        cout<<1<<"\n";
        return;
    }

    int count = 0;
    int ans = 1;

    for(int i = 1; i < 100; i++) {
        if(n % i == 0) {
            count++;
        }
        else {
            ans = max(ans, count);
            count = 1;
        }
    }
    cout<<ans<<"\n";
    return;

    // vector<ll> v;
    // v = get_factors(n);
    
    // for(int i = 1; i < v.size(); i++) {
    //     // cout<<v[i]<<" ";
    //     if(v[i] - v[i - 1] == 1) {
    //         count++;
    //     }
    //     else {
    //         count = 1;
    //     }
    //     ans = max(ans, count);
    // }
    // cout<<ans<<"\n";
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