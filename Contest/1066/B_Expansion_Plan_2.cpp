#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--) {
        long long n, x, y;
        cin>>n>>x>>y;

        string s;
        cin>>s;
        
        if(x == 0 && y == 0) {
            cout<<"YES\n";
            continue;
        }

        long right = 0, up = 0;
        

        if(x < 0) {
            x = -x;
        }
        if(y < 0) {
            y = -y;
        }
        
        int e = 0, f = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '4') {
                f++;
            }
            else {
                e++;
            }
        }
        
        right = x - e;
        up = y - e;

        if(right + up < f) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }

        
    }
}