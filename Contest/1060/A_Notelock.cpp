#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;
        k--;

        string s;
        cin>>s;

        int ans = 0;
        bool one = false;
        
        int len = k;
        int ind = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                ind = i;
                one = true;
                break;
            }
        }
        if(ind < n) {
            ans = 1;
        }
        for(int i = ind + 1; i < n; i++) {
            if(s[i] == '1' && len <= 0) {
                ans++;
                len = k;
                one = true;
            }
            else if(s[i] == '1') {
                len = k;
                one = true;
            }
            else {
                len--;
            }
        }
        if(!one) {
            cout<<0<<"\n";
        }
        else {
            cout<<ans<<"\n";
        }
        
    }
}