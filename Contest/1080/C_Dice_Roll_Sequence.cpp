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
    int ans = 0;
    for(int i = 1; i < n; i++) {
        if(v[i] == v[i - 1] || v[i] + v[i - 1] == 7) {
            ans++;
            i++;
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ANKIT

//   sieve(); // Uncomment if you need primes

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}