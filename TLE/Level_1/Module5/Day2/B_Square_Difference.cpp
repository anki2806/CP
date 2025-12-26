#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin>>t;

    while(t--) {
        ll a, b;
        cin>>a>>b;

        ll rem = (a + b);
        ll r = (a - b);

        

        // cout<<rem<<" "<<r<<"\n";
        if(r == 1) {
            bool flag = true;
            for(ll i = 2; i <= sqrt(rem) + 1; i++) {
                if(rem % i == 0) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                cout<<"YES\n";
            }
            else {
                cout<<"NO\n";
            }
        }
        else {
            cout<<"NO\n";
        }
    }
}