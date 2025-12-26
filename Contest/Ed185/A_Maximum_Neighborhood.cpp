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

        if(n == 1) {
            cout<<"1\n";
            continue;
        }
        if(n == 2) {
            cout<<"9\n";
            continue;
        }
        int arr[n][n];
        int val = 1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                arr[i][j] = val++;
            }
        }
        int ans = 0;
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < n; j++) {
                int sum = arr[i][j] + arr[i - 1][j] + arr[i][j - 1];
                
                if(i + 1 < n) {
                    sum += arr[i + 1][j];
                }
                if(j + 1 < n) {
                    sum += arr[i][j + 1];
                }
                ans = max(ans, sum);
            }
        }
        cout<<ans<<"\n";
    }
}