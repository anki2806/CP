#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);

        int m = 0;

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            m = max(m, arr[i]);
        }

        for(int i = 0; i < k; i++) {
            cout<<(m + i + 1)<<" ";
        }

        cout<<"\n";
    }
}