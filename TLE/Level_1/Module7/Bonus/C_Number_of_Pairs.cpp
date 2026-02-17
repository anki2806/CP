#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

int searchLeft(int val, vector<int> &v) {
    int left = 0, right = v.size() - 1, mid = (left + right) / 2;
    int ans = right + 1;
    while(left <= right) {
        if(v[mid] >= val) {
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
        mid = (left + right) / 2;
    }
    return ans;
}

int searchRight(int val, vector<int> &v) {
    int left = 0, right = v.size() - 1, mid = (left + right) / 2;

    int ans = -1;
    // cout<<val<<" ";
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
    return ans;
}
void solve() {
    int n, l, r;
    cin>>n>>l>>r;
    if(r < l) {
        swap(l, r);
    }
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    sort(all(v));
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ll curr = 0;
        int left = l - v[i];
        int right = r - v[i];

        int findLeft = searchLeft(l - v[i], v);
        int findRight = searchRight(r - v[i], v);

        // cout<<findLeft<<" l "<<findRight<<" r ";

        if(findRight >= findLeft) {
            curr = findRight - findLeft + 1;
        }
        
        if(curr > 0 && findLeft > -1 && findRight > -1 && v[i] >= v[findLeft] && v[i] <= v[findRight]) {
            curr--;
        }
        ans += curr;
    }
    cout<<(ans/2)<<"\n";
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