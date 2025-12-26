#include<iostream>

using namespace std;

int main() {
    long long int n, k;
    cin>>n;
    k = n;

    if(n < 10) {
        cout<<1<<"\n";
    }
    else {
        int ans = 1;
        int a = 0;
        while(n > 0) {
            ans *= 10;
            a = n % 10;
            n /= 10;
        }
        ans /= 10;

        a = (a + 1) * ans;
        cout<<a - k;
    }
}