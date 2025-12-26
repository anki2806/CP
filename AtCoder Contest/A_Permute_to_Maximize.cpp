#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin>>a>>b>>c;
    int ans = 0;
    if(a > b && a > c) {
        ans = ans * 10 + a;
        if(b > c) {
            ans = ans * 10 + b;
            ans = ans * 10 + c;
        }
        else {
            ans = ans * 10 + c;
            ans = ans * 10 + b;
        }
    }
    else if(b > c) {
        ans = ans * 10 + b;
        if(a > c) {
            ans = ans * 10 + a;
            ans = ans * 10 + c;
        }
        else {
            ans = ans * 10 + c;
            ans = ans * 10 + a;
        }
    }
    else {
        ans = ans * 10 + c;
        if( a > b) {
            ans = ans * 10 + a;
            ans = ans * 10 + b;
        }
        else {
            ans = ans * 10 + b;
            ans = ans * 10 + a;
        }
    }
    cout<<ans<<"\n";
}