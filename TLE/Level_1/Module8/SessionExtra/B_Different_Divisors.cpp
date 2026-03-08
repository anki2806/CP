#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

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

// Sieve of Eratosthenes — O(N log log N)
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAXN; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAXN; j += i)
                is_prime[j] = false;
        }
    }
}

// Factorization — O(sqrt N)
vector<ll> get_factors(ll n) {
    vector<ll> facts;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            facts.pb(i);
            if (i * i != n) facts.pb(n / i);
        }
    }
    sort(all(facts));
    return facts;
}
// ---------------------------

void solve() {
    int d;
    cin>>d;

    vector<int> v(4);

    v[0] = 1;
    v[1] = v[0] + d;
    if(v[1] % 2 == 0 && v[1] != 2) {
        v[1]++;
    }
    int val = v[1];
    
    while(!is_prime[val]) {
        val++;
    }

    v[1] = val;

    val = val + d;
    
    while(!is_prime[val]) {
        val++;
    }

    v[2] = val;
    
    v[3] = v[2] * v[1];

    cout<<v[3]<<"\n";

}

int main() {
    ANKIT

  sieve(); // Uncomment if you need primes

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}