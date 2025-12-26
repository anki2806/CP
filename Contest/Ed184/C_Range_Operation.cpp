#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n + 1];

        for(int i = 1; i <= n; i++) {
            cin>>arr[i];
        }

        int ans = 0;
        
        for(int i = 1; i <= n; i++) {
            int val = 0;
            int left = i;
            while((left + i) >= arr[i]) {
                val += ((left + i) - arr[i]);
                i++;
                if(i - left > 0) {
                    int a = i - left - 1;
                    val += ((a * (a - 1))/2);
                }
            }
            if(val > ans) {
                ans = val;
            }
        }
        int finalAns = 0;
        for(int i = 1; i <= n; i++) {
            finalAns += arr[i];
        }

        cout<<finalAns + ans<<"\n";

    }
}