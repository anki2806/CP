#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int val = c - b;

    int ans = 0;
    if(val == (b + a)) {
        ans++;
    }

    if(c == (val + b)) {
        ans++;
    }
    
    if(d == (c + val)) {
        ans++;
    }

    int val2 = a + b;
    int ans2 = 0;
    if(val2 == (b + a)) {
        ans2++;
    }
    if(c == (val2 + b)) {
        ans2++;
    }
    
    if(d == (c + val2)) {
        ans2++;
    }
    ans = max(ans, ans2);
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