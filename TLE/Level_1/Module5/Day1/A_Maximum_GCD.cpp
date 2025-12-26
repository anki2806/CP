#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        if(n <= 3) {
            cout<<"1\n";
        }
        else {
            if(n % 2 == 1) {
                cout<<((n - 1)/2)<<"\n";
            }
            else {
                cout<<(n/2)<<"\n";
            }
        }
    }
    
}