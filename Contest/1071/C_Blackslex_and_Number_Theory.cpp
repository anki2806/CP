#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0 ; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr + n);

    // for(int i = 1; i < n; i++) {
        if((arr[1] - arr[0]) < arr[0]) {
            cout<<arr[0]<<"\n";
            return;
        }
    // }
    cout<<arr[1] - arr[0]<<"\n";

    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}