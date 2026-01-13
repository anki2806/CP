#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    ll s, k, m;
    cin>>s>>k>>m;

    ll flip = m / k;
    
    ll left = m % k;

    if(flip % 2 == 0) {
        if(s - left < 0) {
            cout<<"0\n";
        }
        else {
            cout<<s-left<<"\n";
        }
    }
    else {
        ll less = min(s, k);
        // if(less == 0) {
        //     less += min(s,k);
        // }
        if(less - left < 0) {
            cout<<"0\n";
        }
        else {
            cout<<less-left<<"\n";
        }
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