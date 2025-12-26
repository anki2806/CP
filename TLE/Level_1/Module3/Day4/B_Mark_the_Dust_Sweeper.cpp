#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];

        bool flag = false;
        int ind = n;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];

            if(arr[i] > 0 && !flag) {
                flag = true;
                ind = i;
            }
        }

        long long int ans = 0;

        for(int i = ind; i < n - 1; i++) { 
            if(arr[i] == 0) {
                ans++;
            }
            else {
                ans += arr[i];
            }
        }

        cout<<ans<<"\n";
    }
}