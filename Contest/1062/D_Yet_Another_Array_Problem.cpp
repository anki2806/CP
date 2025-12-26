#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int gcd(long long int a, long long int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        long long int arr[n] = {0};

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        vector<int> ans;

        for(int i = 2; i < 100; i++) {
            for(int j = 0; j < n; j++) {
                if(gcd(arr[j], i) == 1) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        
        sort(ans.begin(), ans.end());

        cout<<ans[0]<<"\n";
    }
}