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
    bool change = false;
    int ind = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] != n - i) {
            ind = i;
            break;
        }
    }
    int val = n - ind;
    int stop = ind;
    // cout<<val<<" "<<ind<<" ";
    for(int i = 0; i < n; i++) {
        if(v[i] == val) {
            ind = i;
            break;
        }
    }
    for(int i = 0; i < stop; i++) {
        cout<<v[i]<<" ";
    }
    for(int i = ind; i >= stop; i--) {
        cout<<v[i]<<" ";
    }
    
    for(int i = ind + 1; i < n; i++) {
        cout<<v[i]<<" ";
    }
    cout<<"\n";

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