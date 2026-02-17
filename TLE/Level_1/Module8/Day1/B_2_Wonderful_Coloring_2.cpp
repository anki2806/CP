#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    int arr[200005] = {0};

    for(int i = 0; i < n; i++) {
        cin>>v[i];
        arr[v[i]]++;
    }

    int ans = 0;
    for(int i = 0; i < 26; i++) {
        ans += (arr[i] <= k) ? arr[i] : k;
    }
    cout<<ans/k<<"\n";

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