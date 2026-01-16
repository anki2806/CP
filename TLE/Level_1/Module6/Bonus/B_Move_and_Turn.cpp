#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve(vector<ll> v) {
    int n;
    cin>>n;
    
    cout<<v[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    vector<ll> v(10005);
    v[0] = 0;
    v[1] = 4;
    v[2] = 4;
    v[3] = 12;
    v[4] = 13;

    ll p = 7;
    for(int i = 5; i <= 10004; i++) {
        ll val = ((p * p) - ((p - 2) * (p - 2))) / 2;
        v[i] = v[i - 2] + val;

        if(i % 2 == 0) {
            p += 2;
        }
    }
    while (t--) {
        solve(v);
    }
    return 0;
}