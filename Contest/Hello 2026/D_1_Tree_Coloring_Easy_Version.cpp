#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int n;
    cin>>n;

    vector<vector<int>> arr(n, vector<int>(2));
    for(int i = 0; i < n; i++) {
        int a, b;
        cin>>a>>b;
        a--;
        b--;
        arr[a].push_back(b);
        arr[b].pb(a);
    }

    for(int i = 0; i < arr.size(); i++) {
        cout<<i<<" : ";
        for(int j = 0; j < arr[i].size(); j++) {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}