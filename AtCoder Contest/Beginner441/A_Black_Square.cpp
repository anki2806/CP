#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll p,q;
    cin>>p>>q;
    
    ll x,y;
    cin>>x>>y;

    if(x < p || x > (p + 99)) {
        cout<<"No\n";
    }
    else if(y < q || y > (q + 99)) {
        cout<<"No\n";
    }
    else {
        cout<<"Yes\n";
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