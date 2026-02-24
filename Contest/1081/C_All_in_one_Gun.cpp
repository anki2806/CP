#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, h, k;
    cin>>n>>h>>k;
    
    vector<ll> v(n);

    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        sum += v[i];
    }

    if(h == 1) {
        cout<<"1\n";
        return;
    } 

    ll div = (h - 1) / sum;

    ll ans = (n + k) * div;

    ll req = (h - 1) % sum;
    
    if(req + 1 == sum) {
        ans += n;
    }
    else {
        vector<ll> cp(n);
        vector<ll> diff(n, 0);
        ll mx = v[n - 1];
        cp[n - 1] = v[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            mx = max(mx, v[i]);
            diff[i] = mx - v[i];
        }
        cp[0] = diff[0];
        for(int i = 1; i < n; i++) {
            cp[i] = max(cp[i - 1], diff[i]);
        }
        ll s = 0;
        ll prev = 0;
        cout<<req<<" ";
        for(int i = 0; i < n; i++) {
            s += v[i];
            s -= prev;
            s += cp[i];
            if(s >= req) {
                ans += i + 2;
                break;
            }
        }        
    }

    cout<<ans<<"\n";


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