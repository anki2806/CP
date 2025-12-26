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
        if(arr[n - 1] == 1) {
            cout<<"NO\n";
            continue;
        }
        else {
            cout<<"YES\n";
        }

        int ans[n];
        int count = 1;
        for(int i = n - 1; i >= 0; i--) {
            if(arr[i] == 0) {
                ans[i] = 0;
                count = 1;
            }
            else if(i > 0 && arr[i - 1] == 1) {
                ans[i] = 0;
                count++;
            }
            else {
                ans[i] = count;
                count = 1;
            }
        }
        for(int i = n - 1; i >= 0; i--) {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}