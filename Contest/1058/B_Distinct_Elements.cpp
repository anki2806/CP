#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        long long int arr[n] = {0};
        long long int ans[n] = {0};

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        ans[0] = 1;
        long long int val = 1;

        for(long long int i = 1; i < n; i++) {
            if((arr[i] - arr[i - 1]) == (i+1)) {
                ans[i] =  val + 1;
                val++;
            }
            else {
                ans[i] = (long long int)ans[i - (arr[i] - arr[i-1])];
            }
        }
        for(long long int i = 0; i < n; i++) {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

    }
}