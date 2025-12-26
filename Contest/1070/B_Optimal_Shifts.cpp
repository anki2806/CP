#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        string s;

        cin>>s;
        int lastOne = 0, firstOne = -1;
        int count = 0, zero = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                if(firstOne == -1) {
                    firstOne = i;
                }
                lastOne = i;
                count = 0;
            }
            else {
                count++;
            }
            zero = max(zero, count);
        }
        zero = max(zero, n - lastOne - 1 + firstOne);
        cout<<zero<<"\n";
    }
    
}