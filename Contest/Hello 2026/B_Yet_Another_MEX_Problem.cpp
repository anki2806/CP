#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int n, k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }

    // sort(all(v));

    vector<bool> check(n + 1, false);

    for(int i = 0; i < n; i++) {
        check[v[i]] = true;
    }
    int ind = k-1;
    for(int i = 0; i <= n; i++) {
        // cout<<i<<":"<<check[i]<<" ";
        if(ind <= i) {
            break;
        }
        if(check[i] == false) {
            ind = i;
            break;
        }
    }
    
    cout<<ind<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//   sieve(); // Uncomment if you need primes

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}