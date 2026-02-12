#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

int find(int num, vector<int> &v) {
    int left = 0;
    int right = v.size() - 1;

    int mid = (right + left) / 2;
    int ans = -1;
    while(left <= right) {
        mid = (right + left) / 2;
        if(v[mid] <= num) {
            ans = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return ans + 1;
}

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }

    int m;
    cin>>m;
    
    sort(all(v));

    for(int i = 0; i < m; i++) {
        int l, r;
        cin>>l;
        cin>>r;
        int left = find(l - 1, v);
        int right = find(r, v);
        cout<<(right - left)<<" ";
    }
    cout<<"\n";
}

int main() {
    ANKIT
    solve();
    return 0;
}