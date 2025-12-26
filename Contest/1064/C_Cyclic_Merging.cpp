#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n + 1];
        int maxi = 0, ans = 0;

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        arr[n] = arr[0];

        for(int i = 0; i < n; i++) {
            ans += max(arr[i], arr[i + 1]);

            maxi = max(maxi, max(arr[i], arr[i + 1]));
        }
        

        cout<<ans - maxi<<"\n";

    }
}