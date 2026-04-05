#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    
    vector<int> v(n + 5, 1);
    for(int i = 1; i <= n; i++) {
        int num = 2 * i + 1;
        int g = __gcd(num, v[i]);
        v[i] *= num/g;
        g = __gcd(num, v[i + 1]);
        v[i + 1] *= num / g;
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