#include<iostream>
#include<string>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,k;
        cin>>n>>k;

        string s;
        string ans;
        ans.resize(n);
        cin>>s;

        int p = 0, q = n - 1, r = 0;
        if(n == k) {
            for(int i = 0; i < n; i++) {
                ans[i] = '-';
            }
        }
        else {
            int top = 0, bottom = 0, both = 0;

            for(int i = 0; i < k; i++) {
                if(s[i] == '0') {
                    top++;
                }
                else if(s[i] == '1') {
                    bottom++;
                }
                else {
                    both++;
                }
            }
            int maxTop = top + both;
            int maxBottom = bottom + both;

            for(int i = 0; i < n; i++) {
                if((i < top) || i > (n - bottom - 1)) {
                    ans[i] = '-';
                }
                else if(i < maxTop || i > (n - maxBottom - 1)) {
                    ans[i] = '?';
                }
                else {
                    ans[i] = '+';
                }
            }
        }
        cout<<ans<<"\n";
        
    }
}