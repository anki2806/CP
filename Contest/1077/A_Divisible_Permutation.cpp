#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    
    // if(n == 2) {
    //     cout<<"1 2\n";
    //     return;
    // }
    vector<int> arr(n, 0);
    int val = 1;
    int ind = n - 1;
    if(n % 2 == 0) {
        ind = n - 2;
    }
    for(int i = ind; i >= 0; i -= 2) {
        arr[i] = val;
        val++;
    }
    for(int i = 1; i < n; i += 2) {
        arr[i] = val++;
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
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