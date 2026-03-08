#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, x;
    cin>>n>>x;

    vector<int> v(n);
    bool available = false;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        if(v[i] < x) {
            available = true;
        }
    }

    if(!available) {
        cout<<"IMPOSSIBLE\n";
        return;
    }

    unordered_map<int, int> map;
    // IMPOSSIBLE
    for(int i = 0; i < n; i++) {
        int req = x - v[i];
        if(map.find(req) != map.end()) {
            cout<<map[req]<<" "<<i + 1<<"\n";
            return;
        }
        else {
            map.insert({v[i], i + 1});
        }
    }
    cout<<"IMPOSSIBLE\n";

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