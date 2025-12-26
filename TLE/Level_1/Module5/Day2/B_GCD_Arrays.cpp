#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        long long l,r,k;
        cin>>l>>r>>k;
        long long count = 0;
        
        count = (r - l) / 2;

        if(l % 2 == 1 || r % 2 == 1) {
            count++;
        }

        if(count <= k || (l == r && l > 1)) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}