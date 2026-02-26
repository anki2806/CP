#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

bool isPossible(ll w, ll h, ll mid, ll n) {
    ll big = mid / h;
    ll small = mid / w;

    return (big * small) >= n;
}

void solve() {
    ll w, h, n;
    cin>>w>>h>>n;
    if(w > h) {
        swap(w, h);
    }

    ll left = 0, right = 1;
    while(true) {
        ll nw = right / w;
        ll nh = right / h;

        if(nw * nh >= n) {
            break;
        }
        right *= 2;
    }

    ll mid = (left + (right - left) / 2);
    ll ans = right;
    while(left <= right) {
        if(isPossible(w, h, mid, n)) {
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
        mid = (left + (right - left) / 2);
    }
    cout<<ans<<"\n";
}

int main() {
    ANKIT
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}