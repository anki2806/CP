#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);


void solve() {
    int n;
    cin>>n;

    set<string> s;
    for(int i = 0; i < n; i++) {
        string st;
        cin>>st;
        s.insert(st);
    }
    cout<<s.size()<<"\n";
}

int main() {
    ANKIT

    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}