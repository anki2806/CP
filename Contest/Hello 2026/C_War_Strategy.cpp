#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

bool possible(ll n, ll m, ll mid, ll k) {

    // k se left max kitne available hai? either mid / 2 or k
    // ll val = 
    ll l = min(mid / 2, k);
    ll r = mid - l;
    ll ans = l - 1 + max(l, r) + r;
    
    // r = min(mid / 2, k );
    // r = n - l;
    // ans = l - 1 + max(l, r) + r;
    return m <= ans;
}

void solve() {
    ll n, m, k;
    cin>>n>>m>>k;
    ll low = 1, high = n;
	k--;
	while(low < high) {
		ll mid = (low + high + 1) / 2;
		ll an = LLONG_MAX;
		for(int l = 0, r = mid - 1; r < n; l++,r++) {
			if(k < l) break;
			if(k > r) continue;
			ll left = k - l;
			ll right = r - k;
			an = min(an, left-1 + max(left,right) + right);
		}
 
		if(an <= m) {
			low = mid;
		}
		else {
			high = mid-1;
		}
	}
 
	cout << low <<"\n";
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