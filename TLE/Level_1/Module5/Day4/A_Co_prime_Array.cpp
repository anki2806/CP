#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n, 0);

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    vector<int> ans;
    ans.push_back(arr[0]);
    int count = 0;
    for(int i = 1; i < n; i++) {
        if(gcd(arr[i], ans.back()) > 1) {
            count++;
            ans.push_back(1);
        }
        ans.push_back(arr[i]);
    }
    if(count >= 1) {
        cout<<count<<"\n";
        for(int i = 0; i < ans.size(); i++) {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    else {
        cout<<"0\n";
        for(int i = 0; i < ans.size(); i++) {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    
}