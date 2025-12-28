#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int n; 
    cin>>n;

    ll arr[n];

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    ll pre[n] = {0};
    ll post[n] = {0};

    for(int i = 0; i < n; i++) {
        if(i == 0) {
            pre[i] = arr[i];
        }
        else {
            if(arr[i] < 0) {
                pre[i] = -(arr[i]) + pre[i - 1]; 
            }
            else {
                pre[i] = arr[i] + pre[i - 1];
            }
        }
        // cout<<pre[i]<<" ";
    }

    // cout<<"\n";

    for(int i = n - 1; i >= 0; i--) {
        if(i == n - 1) {
            post[i] = -arr[i];
        }
        else {
            post[i] = -(arr[i]) + post[i + 1];
        }

        // cout<<post[i]<<" ";
    }
    ll ans = LONG_MIN;
    for(int i = 1; i < n  - 1; i++) {
        ans = max(ans, pre[i - 1] + post[i + 1]);
    }

    ans = max(ans, post[1]);
    ans = max(ans, pre[n - 2]);

    cout<<ans<<"\n";

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