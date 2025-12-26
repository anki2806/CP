#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int a, b, c;
        cin>>a>>b>>c;

        if(a == b && b == c || ((a + c) % 2 == 0 && (b + c) % 2 == 0 && (a + b) % 2 == 0)) {
            cout<<"1 1 1\n";
        }
        else if((a + b) % 2 == 0) {
            cout<<"0 0 1\n";
        }
        else if((a + c) % 2 == 0) {
            cout<<"0 1 0\n";
        }
        else {
            cout<<"1 0 0\n";
        }
    }
}