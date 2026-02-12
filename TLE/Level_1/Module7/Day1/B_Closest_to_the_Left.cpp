#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

int find(int val, vector<int> &v) {
    int left = 0;
    int right = v.size() - 1;

    int mid = (right + left) / 2;
    int ans = 0;
    while(left <= right) {
        if(v[mid] <= val) {
            ans = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
        mid = (left + right) / 2;
    }
    return ans + 1;
}

void solve() {
    int n, m;
    cin>>n>>m;
    
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < m; i++) {
        int b;
        cin>>b;
        cout<<((b >= a[0]) ? find(b, a) : 0 )<<"\n";
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