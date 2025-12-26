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
        int total = 0;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        int plus = 0;
        for(int i = 0; i < n - 1; i++) {
            if(arr[i] != -1) {
                plus += arr[i];
            }
        }

        int minus = 0;
        for(int i = 1; i < n; i++) {
            if(arr[i] != -1) {
                minus += arr[i];
            }
        }

        if(minus > plus) {
            if(arr[0] == -1) {
                arr[0] = minus - plus;
                minus = 0;
                plus = 0;
            }
        }
        else if(plus > minus) {
            if(arr[n - 1] == -1) {
                arr[n - 1] = plus - minus;
                minus = 0;
                plus = 0;
            }
            
        }
        cout<<abs(minus - plus)<<"\n";
        for(int i = 0; i < n; i++) {
            if(arr[i] == -1) {
                cout<<0<<" ";
            }
            else {
                cout<<arr[i]<<" ";
            }
        }

        cout<<"\n";
    }
}