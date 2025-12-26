#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        string arr[n];

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        string ans = arr[0];
        string first = arr[0];
        for(int i = 1; i < n; i++) {
            string s1 = arr[i] + ans;
            string s2 = ans + arr[i];

            ans = s1 <= s2 ? s1 : s2;
            
        }
        cout<<ans<<"\n";
    }
}