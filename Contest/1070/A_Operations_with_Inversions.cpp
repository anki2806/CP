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

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        int ans = 0;
        int big = arr[0];
        for(int i = 1; i < n; i++) {
            if(arr[i] < big) {
                ans++;
            }
            else if(arr[i] > big) {
                big = arr[i];
            }
        }
        cout<<ans<<"\n";
    }
    
}