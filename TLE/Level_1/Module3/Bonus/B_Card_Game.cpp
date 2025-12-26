#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;

    while(t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        int finalAns = 0;
        
        if(a >= c && b >= d && !(a == c && b == d)) {
            finalAns += 2;
        }

        if(a >= d && b >= c && !(a == d && b == c)) {
            finalAns += 2;
        }

        cout<<finalAns<<"\n";
    }
}