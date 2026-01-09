#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    ll n, m, k;
    cin>>n>>m>>k;
    
    if(k > 3 || k > (n + 1)) {
        cout<<"0\n";
        return;
    }

    if(k == 1) {
        cout<<"1\n";
        return;
    }

    if(k == 2) {
        if(m > n) {
            cout<<((m/n) - 1 + n)<<"\n";
        }
        else {
            cout<<m<<"\n";
        }
        
    }
    else {
        
        if(m >= n)
            cout<<(m%n) + (((m/n) - 1) * (n - 1))<<"\n";
        else {
            cout<<"0\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//   sieve(); // Uncomment if you need primes

    int t = 1;
    cin >> t;
    while (t--) {
        // if(t == 19945) {
        //     ll a,b,c;
        //     cin>>a>>b>>c;
            
        //     cout<<(a*10 + b ) * 10 + c<<"\n";
        //     continue;
        // }
        solve();
    }
    return 0;
}