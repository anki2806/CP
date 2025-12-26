#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        long long n;
        cin>>n;

        vector<vector<long long>> arr(n, vector<long long>(2, 0));

        for(int i = 0; i < n; i++) {
            cin>>arr[i][0];
            arr[i][1] = i;
        }

        int ans[n] = {0};

        sort(arr.begin(), arr.end(), [](vector<long long> &a, vector<long long> &b) {
            return a[0] > b[0];
        });

        int left = -1, right = 1;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                ans[arr[i][1]] = right;
                sum += (2 * arr[i][0] * right);
                right++;
            }
            else {
                ans[arr[i][1]] = left;
                sum += (2 * arr[i][0] * (-left));
                left--;
            }
        }

        cout<<sum<<"\n";
        cout<<"0 ";

        for(int i = 0; i < n; i++) {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    
}