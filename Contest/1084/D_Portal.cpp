#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, l, r;

    cin>>n>>l>>r;
    vector<int> v(n);
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    int m = v[l];
    int ind = l;
    for(int i = l; i < r; i++) {
        if(v[i] < m) {
            m = v[i];
            ind = i;
        }
    }
    // cout<<m<<" "<<ind<<" "; Correct
    int j = ind;
    int i = l;
    while(j < r) {
        // cout<<v[j]<<" ";
        ans.pb(v[j]);
        j++;
    }
    for(int k = l ; k < ind; k++) {
        // cout<<v[k]<<" ";
        ans.pb(v[k]);
    }
    i = l - 1;
    vector<int> last;
    vector<int> start;
    bool flag = false;
    int left = l;
    while(i >= 0) {
        // cout<<v[i]<<" ";
        if(v[i] > ans[0]) {
            left = i;
            flag = true;
        }
        i--;
    }
    i = left;
    for( ; left < l; left++) {
        last.pb(v[left]);
    }
    while(flag == false && j < n && v[j] < ans[0]) {
        // cout<<v[j]<<" ";
        start.pb(v[j]);
        j++;
    }
    for(int k = 0; k < i; k++) {
        cout<<v[k]<<" ";
    }

    for(int ele : start) {
        cout<<ele<<" ";
    }

    for(int ele : ans) {
        cout<<ele<<" ";
    }

    for(int ele : last) {
        cout<<ele<<" ";
    }

    for(int k = j; k < n; k++) {
        cout<<v[k]<<" ";
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