#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 998244353
#define all(v) v.begin(), v.end()

void solve() {
    ll n;
    cin>>n;

    vector<ll> v(n);
    ll val;
    cin>>val;
    ll sum = val;

    for(int i = 0; i < n; i++) {
        cin>>v[i];
        sum += v[i];
    }

    
    ll div = sum / n;
    ll mod = sum % n;
    ll ans = 1;
    sort(v.begin(), v.end(), greater<>());
    
    for(int i = 0; i < n; i++) {
        // cout<<v[i]<<" ";
    }
    for(int i = 0; i < mod; i++) {
        if(v[i] > (div + 1)) {
            cout<<0<<"\n";
            return;
        }
        if(v[i] > div) {
            ans = (ans * (mod - i)) % MOD;
        }
        else {
            ans = (ans * (n - i)) % MOD;
        }
        
        // cout<<"ans: "<<ans<<" ";
    }

    for(int i = mod; i < n; i++) {
        if(v[i] > div) {
            cout<<0<<"\n";
            return;
        }
        ans = (ans * (n - i) % MOD);
    }

    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}