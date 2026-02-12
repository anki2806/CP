#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

int left(int val, vector<int> &v) {

}

int valFind(int s, int e, vector<int> &v) {
    int mid = s + (e - s) / 2;
    while(s <= e) {

    }
}
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    int mi = INT_MAX, ma = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        mi = min(mi, a[i]);
        ma = max(ma, a[i]);
    }
    vector<int> sum(n);
    for(int i = 0; i < n; i++) {
        cin>>b[i];
        sum[i] = 0;
    }
    sum[0] = b[0];
    for(int i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + b[i];
    }

    while()
    
    
}

int main() {
    ANKIT

//   sieve(); // Uncomment if you need primes

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}