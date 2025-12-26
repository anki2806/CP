#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        
        int ans = n;
        int last = 0;

        for(int i = 1; i < n; i++) {
            if(arr[i] != arr[0]) {
                ans = min(ans, i - last);
                last = i + 1;
            }
        }

        ans = min(ans, n - last);

        if(ans == n) {
            cout<<"-1\n";
        }
        else {
            cout<<ans<<"\n";
        }

        
    }
}