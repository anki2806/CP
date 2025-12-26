#include<iostream>

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
        long long val = 0;
        bool negFound = false;
        for(int i = n - 1; i >= 0; i--) {
            if(arr[i] >= 0 && !negFound) {
                continue;
            }
            else if(arr[i] > 0) {
                int temp = arr[i];
                if(temp + val > 0) {
                    arr[i] = arr[i] + val;
                    val = 0;
                }
                else {
                    arr[i] = 0;
                    val = temp + val;
                }
            }
            else {
                val += arr[i];
                negFound = true;
            }
        }
        long long ans = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] > 0) {
                ans += arr[i];
            }
        }
        cout<<ans<<"\n";
    }
}