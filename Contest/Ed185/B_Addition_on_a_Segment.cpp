#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];
        long long count = 0, totalOnes = 0;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            if(arr[i] > 0) {
                count++;
            }
            totalOnes += arr[i];
        }

        long long ans = count;

        ans = min(ans, totalOnes - n + 1);

        cout<<ans<<"\n";

        

    }
}