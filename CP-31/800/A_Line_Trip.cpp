#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, x;
        cin>>n>>x;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        int maxDistance = arr[0];

        for(int i = 1; i < n; i++) {
            maxDistance = max(maxDistance, arr[i] - arr[i-1]);
            if(i == n - 1) {
                maxDistance = max(maxDistance, (x - arr[i]) * 2);
            }
        }

        if(n == 1) {
            maxDistance = max(maxDistance, (x - arr[0]) * 2);
        }

        cout<<maxDistance<<"\n";

    }
    return 0;
}