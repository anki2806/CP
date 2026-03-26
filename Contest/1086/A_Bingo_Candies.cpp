#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    vector<int> v(n * n);

    for(int i = 0; i < n * n; i++) {
        cin>>v[i];
    }
    sort(all(v));
    int count = 1;
    int mx = 1;
    for(int i = 1; i < n * n; i++) {
        if(v[i] == v[i - 1]) {
            count++;
        }
        else {
            if(count > mx) {
                mx = count;
                count = 1;
            }
        }
    }
    if(count > mx) {
        mx = count;
        count = 1;
    }
    if(mx > (n * (n - 1))) {
        cout<<"NO\n";
    }
    else {
        cout<<"YES\n";
    }
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