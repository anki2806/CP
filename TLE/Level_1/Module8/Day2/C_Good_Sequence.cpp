#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    unordered_map<int, int> map;

    for(int i = 0; i < n; i++) {
        int a;
        cin>>a;
        if(map.find(a) != map.end()) {
            map[a]++;
        }
        else {
            map.insert({a, 1});
        }
    }

    int ans = 0;
    for(pair<int, int> p : map) {
        // cout<<p.first<<" "<<p.second<<"\n";
        if(p.first == p.second) {
            continue;
        }
        else {
            if(p.first > p.second) {
                ans += p.second;
            }
            else {
                ans += (p.second - p.first);
            }
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ANKIT
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}