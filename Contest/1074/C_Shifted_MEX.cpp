#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;

    vector<ll> v(n);

    int arr[3005] = {0};
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }

    sort(all(v));
    int longest = 1;
    ll m = v[0];
    int l = 1;
    ll minus = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] - v[i - 1] == 1) {
            l++;
        }
        else if(v[i] - v[i - 1] == 0) {
            continue;
        }
        else {
            l = 1;
            m = v[i];
        }
        if(l > longest) {
            minus = m;
            longest = l;
        }
    }
    cout<<longest<<"\n";


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