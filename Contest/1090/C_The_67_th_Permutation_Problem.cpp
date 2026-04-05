#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int eve = n + 1;
    int st = 1;
    int ed = n + 2;
    for(int i = 1; i <= 3 * n; i++) {
        if(i % 3 == 1) {
            cout<<st<<" ";
            st++;
        }
        else if(i % 3 == 2) {
            cout<<eve<<" ";
            eve += 2;
        }
        else {
            cout<<ed<<" ";
            ed += 2;
        }
    }
    cout<<"\n";
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