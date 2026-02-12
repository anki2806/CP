#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    
    vector<int> p(n);
    vector<int> a(n);
    vector<bool> b(n, false);

    for(int i = 0; i < n; i++) {
        cin>>p[i];
    }
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int req = 0;
    int ind = -1;
    bool flag = true;
    
    int i = 0, j = 0;

    while(i < n && j < n) {
        if(a[j] == p[i]) {
            j++;
        }
        else {
            i++;
        }
    }
    if(j == n) {
        flag = true;
    }
    else {
        flag = false;
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