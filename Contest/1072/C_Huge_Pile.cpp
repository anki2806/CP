#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    ll n, k;
    cin>>n>>k;
    if(n == k) {
        cout<<"0\n";
        return;
    }
    ll a, b;
    ll count = 0;
    unordered_map<ll, ll> s;
    while(n > 1) {
        a = n / 2;
        b = n - a;
        count++;
        s.insert({a, count});
        s.insert({b, count});

        if(a % 2 == 1) {
            n = a;
        }
        else {
            n = b;
        }
    }
    if(s.find(k) != s.end()) {
        cout<<s[k]<<"\n";
    }
    else {
        cout<<"-1\n";
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