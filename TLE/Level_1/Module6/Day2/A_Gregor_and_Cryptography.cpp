#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

// --- Number Theory Helpers ---
const int MAXN = 1e6 + 5;
vector<bool> is_prime(MAXN, true);

// Euclidean Algorithm — O(log N)
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// LCM — overflow-safe
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    int n;
    cin>>n;

    if(n % 2 == 0) {
        int a = n/2;
        cout<<a<<" "<<n/a<<"\n";
    }
    else {
        cout<<2<<" "<<n-1<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}