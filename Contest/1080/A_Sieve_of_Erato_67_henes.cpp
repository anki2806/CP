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
    bool flag = false;
    bool f = false;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        if(v[i] == 67) {
            flag = true;
        }
    }

    if(flag) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }

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