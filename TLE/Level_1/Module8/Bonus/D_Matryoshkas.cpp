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

    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }

    sort(all(v));
    
    int val = v[0];
    int len = 1;
    int ans = 1;
    int prevLen = 1;
    int prevVal = v[0];
    for(int i = 1; i < n; i++) {
        if(val == v[i]) {
            len++;
            if(prevLen < len) {
                ans++;
                prevLen = len;
            }
        }
        else if(val == v[i] - 1) {
            val = v[i];
            prevLen = len;
            len = 1;
        }
        else {
            prevLen = 0;
            val = v[i];
            len = 1;
            ans++;
        }
    }
    if(prevLen < len && n > 1 && v[n - 1] == v[n - 2]) {
        ans++;
    }
    // if(n > 1 && v[1] != v[0]) {
    //     ans++;
    // }
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