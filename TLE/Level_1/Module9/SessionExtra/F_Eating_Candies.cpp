#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }

    int left = 0, right = n - 1;
    int alice = v[0], bob = v[n - 1];
    int ans = 0;

    while(left < right) {
        if(alice == bob) {
            ans = (left + n - right + 1);
            left++;
            alice += v[left];
        }
        else if(alice > bob) {
            right--;
            bob += v[right];
        }
        else {
            left++;
            alice += v[left];
        }
    }
    
    cout<<ans<<"\n";
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