#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int M = max(a,b);
        int m = min(a,b);

        if(((c > m && c < M) && !(d > m && d < M) )|| ((d > m && d < M) && !(c > m && c < M))) {
            cout<<"YES\n";
        } 
        else {
            cout<<"NO\n";
        }
    }
}