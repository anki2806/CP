#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(int t) {
    ll n, h, k;
    cin>>n>>h>>k;
    
    vector<ll> v(n);

    ll sum = 0;

    for(int i = 0; i < n; i++) {
        cin>>v[i];
        sum += v[i];
    }
    // if(t == 5463) {
    //     int af = 0;
    //     for(int i = 0; i < n; i++) {
    //         af = af * 10 + v[i];
    //     }
    //     cout<<af<<"\n";
    //     // 232 6
    //     // 121 4 
    //     return;
    // }
    ll ans = 0;

    ll req = ((h - 1) % sum) + 1;

    ll div = (h - 1) / sum;
    // cout<<div<<" ";

    ans += (div * (k + n));
    // cout<<ans<<" ";
    vector<ll> suffMax(n);
    vector<ll> prefMin(n);
    suffMax[n - 1] = v[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        suffMax[i] = max(suffMax[i + 1], v[i]);
    }
    prefMin[0] = v[0];

    for(int i = 1; i < n; i++) {
        prefMin[i] = min(prefMin[i - 1], v[i]);
    }
    ll s = 0;
    int i = 0;
    for(; i < n; i++) {
        s += v[i];
        if((i + 1 < n && (s - prefMin[i] + suffMax[i + 1]) >= req) || s >= req) {
            break;
        }
    }
    cout<<ans + i + 1<<"\n";
}

int main() {
    ANKIT
    int t = 1;
    cin >> t;
    while (t--) {
        solve(t);
    }
    return 0;
}