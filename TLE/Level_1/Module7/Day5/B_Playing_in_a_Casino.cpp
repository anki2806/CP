#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, m;
    cin>>n>>m;

    vector<vector<ll>> v(n, vector<ll>(m, 0));

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin>>v[i][j];
        }
    }
    vector<vector<ll>> arr(m, vector<ll>(n, 0));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = v[j][i];
        }
    }
    for(int i = 0; i < m; i++) {
        sort(arr[i].begin(), arr[i].end());
    }
    
    ll sum = 0;
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum += (j * arr[i][j]) - (n - j - 1) * arr[i][j];
        }
    }
    cout<<(sum)<<"\n";

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