#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, w;
    cin>>n>>w;

    vector<int> arr(n, 0);
    vector<int> flag(w + 1, 0);

    for(int i = 0; i <= w; i++) {
        flag[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        if(arr[i] <= w) {
            flag[arr[i]] = 1;
        }
    }

    int ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] <= w) {
                flag[arr[i] + arr[j]] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] <= w) {
                    flag[arr[i] + arr[j] + arr[k]] = 1;
                }
            }
        }
    }

    for(int i = 0; i <= w; i++) {
        ans += flag[i];
    }

    cout<<ans<<"\n";

}