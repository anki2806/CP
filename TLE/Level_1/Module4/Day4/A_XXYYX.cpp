#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int s;
    cin>>s;

    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if(abs(b - c) > 1) {
        cout<<"No\n";
    }
    else if(b == 0 && c == 0 && a > 0 && d > 0) {
        cout<<"No\n";
    }
    else {
        cout<<"Yes\n";
    }
}