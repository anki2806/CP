#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n;
    cin>>n;

    ll small = INT_MAX;
    ll secondSmall = INT_MAX;
    ll sum = 0;

    for(int i = 0; i < n; i++) {
        ll s;
        cin>>s;
        vector<ll> v(s);
        for(int j = 0; j < s; j++) {
            cin>>v[j];
        }
        sort(all(v));
        small = min(small, v[0]);
        secondSmall = min(secondSmall, v[1]);

        sum += v[1];
    }
    sum -= secondSmall;
    sum += small;

    cout<<sum<<"\n";
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