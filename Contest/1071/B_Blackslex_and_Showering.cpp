#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int diff = 0;
    for(int i = 0; i < n - 1; i++) {
        diff += abs(arr[i] - arr[i + 1]);
    }

    int ans = diff - abs(arr[1] - arr[0]);

    for(int i = 1; i < n - 1; i++) {
        ans = min(ans, diff - abs(arr[i + 1] - arr[i]) - abs(arr[i] - arr[i - 1]) + abs(arr[i - 1] - arr[i + 1]));
    }

    ans = min(ans, diff - abs(arr[n - 1] - arr[n - 2]));

    cout<<ans<<"\n";

    
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