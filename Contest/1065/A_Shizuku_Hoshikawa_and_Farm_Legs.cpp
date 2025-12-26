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
        
        if(n % 2 == 0) {
            cout<<(n/4) + 1<<"\n";
        }
        else {
            cout<<"0\n";
        }
        
    }
}