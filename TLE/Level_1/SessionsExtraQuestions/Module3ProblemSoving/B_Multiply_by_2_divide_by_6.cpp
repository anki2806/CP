#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        int ans = 0;

        while(n != 1) {
            if(n % 6 == 0) {
                n /= 6;
            }
            else if(n % 3 == 0) {
                n *= 2;
            }
            else {
                break;
            }
            ans++;
        }
        if(n == 1) {
            cout<<ans<<"\n";
        }
        else {
            cout<<"-1\n";
        }
        
        

    }
    
    
}