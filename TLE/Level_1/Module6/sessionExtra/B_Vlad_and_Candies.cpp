#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int n;
    cin>>n;
    
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    sort(all(v));
    bool flag = true;
    if(n == 1) {
        if(v[0] == 1) {
            flag = true;
        }
        else {
            flag = false;
        }
    } 
    else {
        if(v[n - 1] - v[n - 2] > 1) {
            flag = false;
        }
    }

    if(flag) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
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