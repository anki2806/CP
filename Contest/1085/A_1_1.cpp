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
    int one = s[0] == '0' ? 0 : 1;
    for(int i = 1; i < n - 1; i++) {
        if(s[i] == '1') {
            one++;
        }
        else {
            if(s[i - 1] == '1' && s[i + 1] == '1') {
                one++;
                s[i] = '1';
            }
        }
    }
    if(s[n - 1] == '1') {
        one++;
    }
    int zero = 0;
    for(int i = 1; i < n - 1; i++) {
        if(s[i - 1] == '1' && s[i + 1] == '1') {
            zero++;
            i++;
        }
    }
    cout<<one-zero<<" "<<one<<"\n";

}

int main() {
    ANKIT
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}