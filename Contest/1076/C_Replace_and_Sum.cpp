#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, q;
    cin>>n>>q;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin>>a[i];
        // cout<<a[i]<<" ";
    }

    for(int i = 0; i < n; i++) {
        int b;
        cin>>b;
        a[i] = max(a[i], b);
        // cout<<" "<<a[i]<<"a "; 
    }

    int m = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] > m) {
            m = a[i];
        }
        else {
            a[i] = m;
        }
        // cout<<a[i]<<" ";
    }
    // cout<<"end";
    vector<int> pre(n);
    for(int i = 0; i < n; i++) {
        pre[i] = 0;
    }
    pre[0] = a[0];
    for(int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + a[i];
        // cout<<pre[i]<<" ";
    }

    for(int i = 0; i < q; i++) {
        int l, r;
        cin>>l>>r;

        if(l > 1) {
            cout<<pre[r - 1] - pre[l - 2]<<" ";
        }
        else {
            cout<<pre[r - 1]<<" ";
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