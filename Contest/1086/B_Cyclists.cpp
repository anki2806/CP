#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, k, p, m;
    cin>>n>>k>>p>>m;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    int win = v[p - 1];
    int count = 0;
    v[p - 1] = -1;
    while(m > 0) {
        sort(v.begin(), v.begin() + k);
        // cout<<v[0]<<" "<<v[1]<<" ";

        if(v[0] == -1) {
            // cout<<"HESY "<<count;
            m -= win;
            if(m >= 0)
                count++;
            
        }
        else {
            
            m -= v[0];
        }
        int temp = v[0];
        for(int i = 1; i < n; i++) {
            v[i - 1] = v[i];
        }
        v[n - 1] = temp;
    }
    cout<<count<<"\n";

}

int main() {
    ANKIT

//   sieve(); // Uncomment if you need primes

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}