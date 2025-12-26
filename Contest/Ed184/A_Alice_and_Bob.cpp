#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];
        int a;
        cin>>a;
        int less = 0, more = 0;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];

            if(arr[i] < a) {
                less++;
            }
            else if(arr[i] > a) {
                more++;
            }
        }

        if(less > more) {
            cout<<a-1<<"\n";
        }
        else {
            cout<<a+1<<"\n";
        }
    }
}