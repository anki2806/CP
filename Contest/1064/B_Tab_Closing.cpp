#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--) {
        long long a,b,n;
        cin>>a>>b>>n;

        int ans = 0;

        if(b * n > a && a > b) {
            cout<<"2\n";
        }
        else {
            cout<<"1\n";
        }
    }
}