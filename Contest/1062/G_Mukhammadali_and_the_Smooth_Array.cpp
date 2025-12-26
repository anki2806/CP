#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        long long int arr[n];
        long long int cost[n];

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        
        for(int i = 0; i < n; i++) {
            cin>>cost[i];
        }

        long long int ans = 0;

        for(int i = 0; i < n - 1; i++) {
            if(arr[i] > arr[i + 1]) {
                if(cost[i] < cost[i + 1]) {
                    ans += cost[i];
                }
                else  {
                    if(i > 0) {
                        if(arr[i - 1] <= arr[i + 1]) {
                            ans += cost[i + 1];
                            arr[i + 1] = arr[i];
                        }
                        else {
                            ans += cost[i];
                        }
                    }
                    else {
                        ans += cost[i];
                    }
                    
                }
                
            }
        }
        cout<<ans<<"\n";
    }
}