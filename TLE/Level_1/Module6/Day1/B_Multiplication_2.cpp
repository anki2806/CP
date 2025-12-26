#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int n;
    cin>>n;
    ll a[n];
    ll ans = 1;
    bool zero = false;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i] == 0) {
            zero = true;
            break;
        }
    }
    if(zero) {
        cout<<"0\n";
        return;
    }
    for(int i = 0; i < n; i++) {
        if(a[i] <= 1000000000000000000 / ans) {
            ans *= a[i];
        }
        else {
            cout<<"-1\n";
            return;
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}