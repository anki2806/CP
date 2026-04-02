#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, k;
    cin>>n>>k;

    vector<int> v(n, 0);
    
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    sort(all(v));
    int l = v[0], r = v[0];
    int val = v[0];
    int count = 1;
    int left = v[0], right = -1;
    int len = 0;
    for(int i = 1; i < n; i++) {
        if(v[i] == val) {
            count++;
            // cout<<count<<" "<<v[i]<<"   ";
        }
        else if(v[i] - 1 == val) {
            if(count < k) {
                l = v[i];
            }
            
            val = v[i];
            count = 1;
            r = v[i];
        }
        else {
            val = v[i];
            count = 1;
            l = v[i];
            r = v[i];
        }

        if(count >= k) {
            r = v[i];
            if(r - l + 1 > len) {
                left = l;
                right = r;
                len = r - l + 1;
                // cout<<len<<" ";
            }
        }
    }
    if(count >= k) {
        r = v[n - 1];
        if(r - l + 1 > len) {
            left = l;
            right = r;
        }
    }
    if(right == -1) {
        cout<<"-1\n";
        return;
    }
    cout<<left<<" "<<right<<"\n";

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