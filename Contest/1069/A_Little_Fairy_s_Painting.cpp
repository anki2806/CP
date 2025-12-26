#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];
        set<int> s;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            s.insert(arr[i]);
        }

        sort(arr, arr + n);
        int ans = arr[n - 1];
        int i = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] >= s.size()) {
                ans = arr[i];
                break;
            }
        }
        
        cout<<ans<<"\n";
        
    }
}