#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,m;
        cin>>n>>m;

        int arr[n][2][2];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 2; j++) {
                for(int k = 0; k < 2; k++) {
                    cin>>arr[i][j][k];
                }
            }
        }
        bool flag = false;
        if(m % 2 == 1) {
            flag = false;
        }
        else {
            for(int i = 0; i < n; i++) {
                if(arr[i][0][1] == arr[i][1][0]) {
                    flag = true;
                    break;
                }
            }
        }

        if(flag) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}