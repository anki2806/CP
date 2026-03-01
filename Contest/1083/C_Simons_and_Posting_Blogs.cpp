#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    // cout<<"favagagaravavagaa";
    ll n;
    cin>>n;

    vector<vector<ll>> v(n, vector<ll>());    

    for(int i = 0; i < n; i++) {
        ll len;
        
        cin>>len;
        
        vector<ll> arr(len);

        for(int j = 0; j < len; j++) {
            cin>>arr[j];
        }
        reverse(all(arr));
        set<ll> s;
        for(int j = 0; j < len; j++) {
            if(s.count(arr[j]) == 0) {
                s.insert(arr[j]);
                v[i].pb(arr[j]);
            }
        }
    }

    sort(all(v));
    
    set<ll> s;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < v[i].size(); j++) {
            
        }
        
    }
    cout<<"\n";
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