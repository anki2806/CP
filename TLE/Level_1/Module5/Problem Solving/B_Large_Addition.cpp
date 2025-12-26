#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    ll n;
    cin>>n;
    if(n % 10 == 9) {
        cout<<"NO\n";
        return;
    }
    n /= 10;
    while(n > 9) {
        int last = (n % 10);
        n /= 10;
        if(last == 0) {
            cout<<"NO\n";
            return;
        }
    }
    if(n != 1) {
        cout<<"NO\n";
    }
    else {
        cout<<"YES\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}