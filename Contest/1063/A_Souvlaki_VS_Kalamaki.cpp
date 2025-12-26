#include<iostream>
#include<algorithm>

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

        sort(arr, arr + n);
        bool flag = true;
        for(int i = 1; i < n - 1; i += 2) {
            if(arr[i] != arr[i + 1]) {
                flag = false;
                break;
            }
        }
        if(flag ) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}