#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<long long> primes;

vector<ll> primeFactors(ll n) 
{ 
    vector<ll> factors;
    if(n % 2 == 0) {
        factors.pb(2);
    }

    while (n % 2 == 0) {  
        n = n/2; 
    } 
    for (int i = 3; i * i <= n; i = i + 2) { 
        while (n % i == 0) { 
            factors.pb(i); 
            n = n/i; 
        }
    }
    if (n > 2) {
        factors.pb(n);
    }
    return factors;
}

void solve() {
    ll n;
    cin>>n;
    ll ans = 1;
    vector<ll> fact = primeFactors(n);
    set<int> s;
    for(int i = 0; i < fact.size(); i++) {
        if(s.count(fact[i]) == 0) {
            ans *= fact[i];
            s.insert(fact[i]);
        }
    }
    cout<<ans<<"\n";

}

int main() {
    ANKIT

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}