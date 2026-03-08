#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> a;
    set<int> s;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        if(v[i] % 2 == 0) {
            if(s.count(v[i]) == 0) {
                a.pb(v[i]);
            }
            s.insert(v[i]);
        }
    }
    sort(all(a), greater<int>());
    int ans = 0;
    for(int i = 0; i < a.size(); ) {
        
        ans++;
        a[i] /= 2;
        if((s.count(a[i]) > 0) || ((a[i] % 2) == 1)) {
            // cout<<a[i]<<" ";
            i++;
        }
        
        
    }
    

    cout<<ans<<"\n";
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