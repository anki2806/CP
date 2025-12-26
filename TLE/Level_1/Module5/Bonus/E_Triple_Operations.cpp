#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    int arr[200005] = {0};
    int val = 3;
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 1;
    while(val <= 200000) {
        arr[val] = 1;
        val *= 3; 
    }

    for(int i = 3; i <= 200002; i++) {
        arr[i] = arr[i - 1] + arr[i];
    }

    while(t--) {
        int l, r;
        cin>>l>>r;

        long ans = arr[l];

        for(int i = l; i <= r; i++) {
            ans += arr[i];
        }

        cout<<ans<<"\n";
    }
}