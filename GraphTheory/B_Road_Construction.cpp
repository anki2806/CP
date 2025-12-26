#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin>>n>>m;

    int arr[m][2];
    int degree[n + 1] = {0};

    for(int i = 0; i < m; i++) {
        cin>>arr[i][0]>>arr[i][1];
        degree[arr[i][0]]++;
        degree[arr[i][1]]++;
        // cout<<arr[i][0]<<" "<<arr[i][1]<<" "<<degree[arr[i][0]];
    }
    int ans = -1;
    for(int i = 1; i <= n; i++) {
        if(degree[i] == 0) {
            ans = i;
            break;
        }
    }
    cout<<n-1<<"\n";
    for(int i = 1; i <= n; i++) {
        if(i == ans){
            continue;
        }
        else {
            cout<<ans<<" "<<i<<"\n";
        }
    }


}