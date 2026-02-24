#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);
bool formCouncil(ll val, vector<ll> &v, int k) {
    ll sum = 0;
    int n = v.size();
    for(int i = 0; i < n; i++) {
        sum += min(v[i], val);
    }
    return sum >= val * k;
}
void solve() {
    ll k, n;
    cin>>k>>n;
    vector<ll> v(n);
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        sum += v[i];
    }

    ll left = 0, right = sum;
    ll mid = (right + left) / 2;
    ll ans = left;
    while(left <= right) {
        if(formCouncil(mid, v, k)) {
            ans = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
        mid = (right + left) / 2;
    }
    cout<<ans<<"\n";
}

int main() {
    ANKIT
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}