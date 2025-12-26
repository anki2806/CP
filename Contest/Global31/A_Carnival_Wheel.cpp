#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int l, a, b;
        cin>>l>>a>>b;

        set<int> s;
        s.insert(a);
        int val = (a + b) % l;
        int ans = a;
        // cout<<"val "<<val<<" ";
        while (s.count(val) == 0) {
            // cout<<" Here "<<val<<" ";
            ans = max(ans, val);
            s.insert(val);
            val = (val + b) % l;
        }
        cout<<ans<<"\n";
        
    }
}