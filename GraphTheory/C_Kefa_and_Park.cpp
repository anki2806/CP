#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

int dfs(vector<int> &v, vector<vector<int>> &arr, int ind, int sum, int m, int parent) {
    if(arr[ind].size() == 1 && arr[ind][0] == parent) {
        // cout<<ind<<" vind "<<v[ind]<<" ";
        if(m < sum + v[ind]) {
            return 0;
        }
        return 1;
    }
    if(v[ind] == 0) {
        sum = 0;
    }
    sum += v[ind];
    if(m < sum) {
        return 0;
    }
    
    int val = 0;
    for(int i = 0; i < arr[ind].size(); i++) {
        if(arr[ind][i] != parent) {
            val += dfs(v, arr, arr[ind][i], sum, m, ind);
        }
        
    }
    // cout<<"VAL = "<<val<<" ";
    return val;
}
void solve() {
    int n, m;
    cin>>n>>m;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }

    vector<vector<int>> arr(n, vector<int>());

    for(int i = 0; i < n - 1; i++) {
        int a, b;
        cin>>a>>b;

        arr[a - 1].push_back(b - 1);
        arr[b - 1].push_back(a - 1);
    }
    
    int ans = dfs(v, arr, 0, 0, m, -1);
    cout<<ans<<"\n";
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