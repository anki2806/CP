#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            sum += arr[i];
        }

        if(sum % 2 == 0) {
            cout<<"0\n";
            continue;
        }
        int count = 0;
        while(sum % 2 != 0) {
            count++;

            for(int i = 0; i < n; i++) {
                sum -= arr[i];
                arr[i] /= 2;
                sum += arr[i];
                if(sum % 2 == 0) {
                    cout<<count<<"\n";
                    break;
                }
            }
        }
        
        
    }
}