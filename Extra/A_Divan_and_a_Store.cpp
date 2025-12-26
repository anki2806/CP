#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        int n, l, r, k;

        cin>>n>>l>>r>>k;

        int arr[n];

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        sort(arr, arr + n);
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] <= k && arr[i] >= l && arr[i] <= r) {
                ans++;
                k -= arr[i];
            }
            if(arr[i] > k) {
                break;
            }
        }
        cout<<ans<<"\n";



    }
    
}