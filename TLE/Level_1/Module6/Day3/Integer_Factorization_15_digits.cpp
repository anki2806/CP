#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve(ll n) {
    vector<ll> ans;

    for(ll i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            ans.push_back(i);
            n = n / i;
        }
    }
    if(n > 1) {
        ans.push_back(n);
    }
    int count = 1;
    for(int i = 1; i < ans.size(); i++) {
        if(ans[i] != ans[i - 1]) {
            cout<<ans[i - 1]<<"^"<<count<<" ";
            count = 1;
        }
        else {
            count++;
        }
    }
    cout<<ans.back()<<"^"<<count<<"\n";
}
int main() {

    vector<ll> arr;
    while(true) {
        ll a;
        cin>>a;

        if(a == 0) {
            break;
        }
        arr.push_back(a);
    }

    for(int i = 0; i < arr.size(); i++) {
        // cout<<arr[i]<<" ";
        solve(arr[i]);
    }

}