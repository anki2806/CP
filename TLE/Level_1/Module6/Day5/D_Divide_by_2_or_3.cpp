#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

// Euclidean Algorithm — O(log N)
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    int g = 0;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        g = gcd(g, v[i]);
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        v[i] /= g;

        while(v[i] % 2 == 0) {
            v[i] /= 2;
            count++;
        }
        while(v[i] % 3 == 0) {
            v[i] /= 3;
            count++;
        }

        if(v[i] != 1) {
            cout<<"-1\n";
            return;
        }
    }
    cout<<count<<"\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//   sieve(); // Uncomment if you need primes

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}