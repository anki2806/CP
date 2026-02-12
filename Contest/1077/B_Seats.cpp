#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            count++;
        }
        else {
            ans++;
            if(count % 2 == 1) {
                ans += count / 2;
            }
            else {
                if(count > 0) {
                    ans += ((count / 2) - 1);
                }
            }
            count = 0;
        }
    }
    
    if(n == count && count <= 3) {
        ans = 1;
    }
    else {
        if(count != 0 && count % 2 == 0) {
            // cout<<"yes";
            ans += (count / 2) - 1;
        }
        else if(count != 0 && count % 2 == 1) {
            // cout<<"NOOO";
            ans += (count / 2);
        }
    }
    cout<<ans<<"\n";
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