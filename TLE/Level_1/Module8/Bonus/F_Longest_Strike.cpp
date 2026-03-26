#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, k;
    cin>>n>>k;

    vector<int> v(n, 0);
    
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    sort(all(v));
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