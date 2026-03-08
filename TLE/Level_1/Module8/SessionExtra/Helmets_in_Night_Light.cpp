#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, p;
    cin>>n>>p;

    int ans = p;
    vector<pair<int, int>> v(n + 1);
    for(int i = 0; i < n; i++) {
        cin>>v[i].second;
    }
    for(int i = 0; i < n; i++) {
        cin>>v[i].first;
    }
    v[n].first = p;
    v[n].second = n - 1;
    
    sort(v.begin(), v.end());

    // for(int i = 0; i < n; i++) {
    //     cout<<v[i].first<<" "<<v[i].second<<"\n";
    // }
    int i = 0;
    n--;
    while(n > 0) {
        if(v[i].second <= n) {
            n -= v[i].second;
            ans += (v[i].first) * v[i].second;
        }
        else {
            ans += (v[i].first * n);
            n = 0;
        }
        i++;
    }
    cout<<ans<<"\n";
}

int32_t main() {
    ANKIT
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}