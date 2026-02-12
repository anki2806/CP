#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll a, b;
    cin>>a>>b;


    ll div = min(a/2, b/3);
    if(a >= b) {
        cout<<"Alice\n";
    }
    else {
        if(div < b - a) {
            cout<<"Alice\n";
        }
        else {
            cout<<"Bob\n";
        }
    }
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