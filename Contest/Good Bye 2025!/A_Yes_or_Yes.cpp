#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
void solve() {
    string s;
    cin>>s;
    int count = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'Y') {
            count++;
        }
    }

    if(count > 1) {
        cout<<"NO\n";
    }
    else {
        cout<<"YES\n";
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