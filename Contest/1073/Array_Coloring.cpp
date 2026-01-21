#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }

    for(int i = 1; i < n; i++) {
        if(a[i] % 2 == a[i - 1] % 2) {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";

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