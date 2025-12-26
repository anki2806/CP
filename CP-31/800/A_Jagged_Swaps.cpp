#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vector<int> arr(n);
        int small = 100;

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            small = min(small, arr[i]);
        }

        if(arr[0] == small) {
            cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }
        
    }
}