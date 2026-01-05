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

// Factorization — O(sqrt N)
vector<ll> get_factors(ll n) {
    vector<ll> facts;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            facts.pb(i);
            // if (i * i != n) facts.pb(n / i);
        }
    }
    sort(all(facts));
    return facts;
}
// ---------------------------

void solve() {
    ll n, p;
    cin>>n>>p;

    if(n == 1) {
        cout<<p<<"\n";
        return;
    }

    vector<ll> fact = get_factors(p);
    
    if(n >= 45) {
        cout<<"1\n";
    }
    else {
        ll ans = 1;
        
        for(ll ele : fact) {
            
            ll power = 1;
            bool flag = true;
            for(int i = 1; i <= n; i++) {
                power *= ele;

                if(power > p) {
                    flag = false;
                }
            }

            if(flag && p % power == 0) {
                ans = ele;
            }
        }

        cout<<ans<<"\n";
    }
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