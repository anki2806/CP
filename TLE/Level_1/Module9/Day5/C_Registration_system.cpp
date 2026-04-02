#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

int num = 1;
set<string> st;
void solve() {
    
    int n;
    cin>>n;
    map<string, int> mp;
    for(int i = 0; i < n; i++) {
        string s;
        cin>>s;
        if(mp.find(s) != mp.end()) {
            int val = mp[s];
            // cout<<val<<" ";
            mp[s] = val + 1;
            cout<<s + to_string((val + 1))<<"\n";
        }
        else {
            mp.insert({s, 0});
            cout<<"OK\n";
        }
        
    }
    

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