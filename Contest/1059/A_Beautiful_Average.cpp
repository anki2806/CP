#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];
        int ans = 0;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            ans = max(ans, arr[i]);
        }
        cout<<ans<<"\n";
    }
}