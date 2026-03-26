#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, k;
    cin>>n>>k;
    unordered_map<int, int> mp;
    
    vector<int> v(n);
    int left = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        if(mp.find(v[i]) != mp.end()) {
            mp.insert({v[i], mp[v[i]] + 1});
        }
        else {
            mp.insert({v[i], 1});
        }

        while((int)mp.size() == k) {
            mp.insert({v[left], mp[v[i]] - 1});
            if(mp[v[left]] == 0) {
                mp.erase(v[i]);
            }
            left++;
        }
        ans = max(ans, i - left + 1);
    }
    cout<<ans<<"\n";
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