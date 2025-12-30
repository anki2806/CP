#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll a,b;
    cin>>a>>b;
    
    // if(b % 2 == a % 2 && a > b) {
    //     swap(a,b);
    // }
    // else if(a % 2 == 0) {
    //     swap(a, b);
    // }

    // cout<<a<<" " <<b<<" ";
    
    int p = a;
    int q = b;

    int ans = 0, ans2 = 0;
    ll minus = 1;
    for(ll i = 1; i < 32; i++) {
        if(i % 2 == 1) {
            a -= minus;
        }
        else {
            b -= minus;
        }
        minus *= 2;
        

        if(a < 0 || b < 0) {
            break;
        }
        ans++;
    }
    a = q;
    b = p;

    minus = 1;
    for(ll i = 1; i < 32; i++) {
        if(i % 2 == 1) {
            a -= minus;
        }
        else {
            b -= minus;
        }
        minus *= 2;
        

        if(a < 0 || b < 0) {
            break;
        }
        ans2++;
    }

    cout<<max(ans, ans2)<<"\n";
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