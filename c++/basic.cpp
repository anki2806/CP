#include<iostream>
using namespace std;

int getNthTerm(int a, int n, int d) {
    return a + (n - 1) * d;
}

int main() {
    int a, n, d, t;

    cin>>t;

    while(t--) {
        cin>>a>>n>>d;
        cout<<getNthTerm(a,n,d)<<"\n";
    }
}

