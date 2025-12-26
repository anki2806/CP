#define ll long long int
#include<iostream>

using namespace std;

int main() {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a + b * c == d || a + b - c == d || a - b * c == d || a - b + c == d || a * b - c == d || a * b + c == d) {
        cout<<"YES"<<"\n";
    }
    else {
        cout<<"NO"<<"\n";
    }
}