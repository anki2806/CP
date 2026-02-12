#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n;
    cin>>n;

    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    sort(all(v), greater<>());
    int countOdd = 0;
    int countEven = 0;
    ll sumOdd = 0;
    ll sumEven = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 1) {
            if(v[i] % 2 == 1) {
                sumOdd += v[i];
            }
        }
        else {
            if(v[i] % 2 == 0) {
                sumEven += v[i];
            }
        }
    }

    if(sumEven > sumOdd) {
        cout<<"Alice\n";
    }
    else if(sumEven < sumOdd) {
        cout<<"Bob\n";
    }
    else {
        cout<<"Tie\n";
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