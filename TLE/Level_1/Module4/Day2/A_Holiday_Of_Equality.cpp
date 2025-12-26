#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    int Max = 0;

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        Max = max(Max, arr[i]);
    }

    int ans = 0;

    for(int i = 0; i < n; i++) {
        ans += (Max - arr[i]);
    }

    cout<<ans<<"\n";

}