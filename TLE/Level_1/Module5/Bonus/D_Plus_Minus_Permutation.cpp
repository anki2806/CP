#include<bits/stdc++.h>
#include<numeric>
#define long long long

using namespace std;

long gcd(long a, long b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

long lcm(long a, long b) {
    return (a / gcd(a,b)) * b;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        long n, x, y;

        cin>>n>>x>>y;
        long a = lcm(x, y);

        long add = 0;

        long lenX = (n / x) - (n / a);
        long lenY = (n / y) - (n / a);
            add = (n * (n + 1)) / 2;
            // add -= ((lenY * (lenY + 1)) / 2);
            lenX = n - lenX;
            // cout<<lenX<<" "<<lenY<<" ";
            add -= ((lenX * (lenX + 1)) / 2);
        // }
        // else {
        //     for(long i = 0; i < lenX; i++) {
        //         add += (n - i);
        //     }
        // }
        
        add -= ((lenY * (lenY + 1)) / 2);
        
        
        cout<<add<<"\n";
        
    }
}