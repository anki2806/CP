#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    int arr[m][n];
    int ans[n + 1][n + 1] = {0};

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(j > 0) {
                ans[arr[i][j]][arr[i][j - 1]] = 1;
                ans[arr[i][j - 1]][arr[i][j]] = 1;
            }
            if(j < n - 1) {
                ans[arr[i][j]][arr[i][j + 1]] = 1;
                ans[arr[i][j + 1]][arr[i][j]] = 1;
            }            
        }
    }

    int count = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i < j && ans[i][j] == 0) {
                count++;
            }
        }
    }

    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n; j++) {
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    cout<<count<<"\n";
}