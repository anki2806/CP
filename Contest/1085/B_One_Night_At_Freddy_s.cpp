#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m, l;

    cin>>n>>m>>l;

    vector<ll> v(n);
    
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    
    if(m == 1) {
        cout<<l - v[n - 1]<<"\n";
        return;
    }
    
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