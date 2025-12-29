#include<bits/stdc++.h>
using namespace std;

int main() {

    int a, b, k;

    cin>>a>>b>>k;

    int r = __gcd(a,b);
    vector<int> ans;

    for(int i = 1; i <= r; i++) {
        if(a % i == 0 && b % i == 0) {
            ans.push_back(i);
        }
    }
    int n = ans.size();
    cout<<ans[n - k]<<"\n";

}