#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, s, x;
    cin>>n>>s>>x;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int a;
        cin>>a;

        sum += a;
    }

    if((s - sum) % x == 0 && s >= sum) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
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