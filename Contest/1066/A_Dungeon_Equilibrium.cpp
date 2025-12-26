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
        int freq[n + 1] = {0};

        for(int i = 0; i < n; i++) {
            cin>>arr[i];

            freq[arr[i]]++;
        }
        int ans = 0;
        for(int i = 0; i <= n; i++) {
            if(freq[i] < i) {
                ans += freq[i];
            }
            else if(freq[i] > i) {
                ans += (freq[i] - i);
            }
        }
        cout<<ans<<"\n";


    }
    
}