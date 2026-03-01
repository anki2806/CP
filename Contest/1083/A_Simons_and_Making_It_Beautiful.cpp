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
    int ind = 0;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        if(v[i] == n) {
            ind = i;
        }
    }
    if(v[0] != n) {
        v[ind] = v[0];
        v[0] = n;
    }
    for(int i = 0; i < n; i++) {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
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