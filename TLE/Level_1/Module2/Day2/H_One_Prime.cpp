#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    bool isPrime = true;
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            isPrime = false;
        }
    }
    if(isPrime) {
        cout<<"YES"<<"\n";
    }
    else {
        cout<<"NO\n";
    }
}