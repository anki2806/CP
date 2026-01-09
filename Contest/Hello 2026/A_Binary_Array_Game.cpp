#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }

    if((v[0] == 0 && v[n - 1] == 0)) {
        cout<<"Bob\n";
    }
    else {
        cout<<"Alice\n";
    }

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