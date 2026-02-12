#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;

    vector<int> v(2 *n);
    for(int i = 0; i < 2 * n; i++) {
        cin>>v[i];
    }

    sort(all(v));

    if(v[0] == v[n * 2 - 1]) {
        cout<<"-1\n";
    }
    else {
        for(int i = 0; i < n * 2; i++) {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    
    
}

int main() {
    ANKIT

//   sieve(); // Uncomment if you need primes

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}