#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) {
        cin>>v[i];
    }
    
    bool flag = true;
    vector<bool> check(n, false);
    for(int i = 1; i <= n; i++) {
        int id = i;
        int val = v[i];

        while(id % 2 == 0) {
            id /= 2;
        }
        while(val % 2 == 0) {
            val /= 2;
        }

        if(val != id) {
            flag = false;
            break;
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