#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s;
    cin>>s;
    int n = s.size();
    int freq[26] = {0};
    for(int i = 0; i < n; i++) {
        freq[s[i] - 'A']++;
    }
    int odd = 0;
    for(int i = 0; i < 26; i++) {
        // cout<<freq[i]<<" ";
        if(freq[i] % 2 == 1) {
            odd++;
        }
    }
    if(odd > 1) {
        cout<<"NO SOLUTION\n";
        return;
    }
    string ans = "";
    string ch = "";
    for(int i = 0; i < 26; i++) {
        if(freq[i] % 2 == 0) {
            freq[i] /= 2;
            while(freq[i] > 0) {
                ans += ('A' + i);
                freq[i]--;
            }
        }
        else {
            while(freq[i] > 0) {
                ch += ('A' + i);
                freq[i]--;
            }
        }
    }
    string val = ans;
    int ind = val.size() - 1;
    for(size_t i = 0; i < (val.size() / 2); i++) {
        char ch = val[i];
        val[i] = val[ind];
        val[ind] = ch;
        ind--;
    }
    // cout<<val<<" ";
    ans += ch + val;
    cout<<ans<<"\n";
}

int main() {
    ANKIT

//   sieve(); // Uncomment if you need primes

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}