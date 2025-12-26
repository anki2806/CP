#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];
        int ind = -1;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            if(arr[i] > 0) {
                ind = i;
            }
        }
        long long prev = 1;
        long long ans = 0;
        for(int i = n - 1; i >= 0; i--) {
            ans += max((long long)0, arr[i] - prev);
            
            prev = arr[i];
            if(i > ind) {
                prev = 1;
            }
        }
        cout<<ans<<"\n";
    }
}