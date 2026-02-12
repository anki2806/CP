#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

int binary(ll val, vector<ll> &pre) {
    int left = 0, right = pre.size() - 1;
    int mid = (right - left) / 2;
    int ans = -1;
    while(left <= right) {
        if(val >= pre[mid]) {
            ans = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
        mid = (right + left) / 2;
    }
    return ans;
}

void solve() {
    ll n, m;
    cin>>n>>m;

    vector<ll> v(n, 0);
    vector<ll> q(m, 0);

    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    for(int i = 0; i < m; i++) {
        cin>>q[i];
    }

    vector<ll> pre(n, 0);
    vector<ll> sum(n, 0);
    sum[0] = v[0];
    pre[0] = v[0];
    for(int i = 1; i < n; i++) {
        pre[i] = max(pre[i - 1], v[i]);
        sum[i] = sum[i - 1] + v[i];
    }

    for(int i = 0; i < m; i++) {
        int ind = binary(q[i], pre);

        if(ind == -1) {
            cout<<"0 ";
        }
        else {
            cout<<sum[ind]<<" ";
        }
    }
    cout<<"\n";

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