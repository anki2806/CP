#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        int n, c;

        cin>>n>>c;

        int arr[n];
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        sort(arr, arr + n);
        int ans = n;
        int prev = arr[n - 1];
        if(prev <= c) {
            ans--;
            c /= 2;
        }
        for(int i = n - 2; i >= 0; i--) {
            if(arr[i] <= c) {
                ans--;
                c /= 2;
            }
        }
        cout<<ans<<"\n";
    }
    
    
}