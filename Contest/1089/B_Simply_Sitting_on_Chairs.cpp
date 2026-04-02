#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        if(v[i] <= i + 1) {
            count++;
        }
    }

    cout<<count<<"\n";


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