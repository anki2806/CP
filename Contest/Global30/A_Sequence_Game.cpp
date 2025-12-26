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

        int x;
        cin>>x;
        bool small = false, big = false;
        int count = 0;

        for(int i = 0; i < n; i++) {
            if(arr[i] <= x) {
                small = true;
            }
            if(arr[i] >= x) {
                big = true;
            }
        }

        if(small && big) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }

    }
}