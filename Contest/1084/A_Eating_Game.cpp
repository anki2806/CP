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
    vector<int> f(11, 0);

    for(int i = 0; i < n; i++) {
        cin>>v[i];
        f[v[i]]++;
    }

    for(int i = 10; i >= 0; i--) {
        if(f[i] > 0) {
            cout<<f[i]<<"\n";
            break;
        }
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