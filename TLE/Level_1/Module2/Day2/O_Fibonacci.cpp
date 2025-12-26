#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    long long one = 0;
    long long two = 1;
    long long sum = 0;
    for(int i = 2; i < n; i++) {
        sum = (one + two);
        one = two;
        two = sum;
    }
    if(n == 1) {
        cout<<"0\n";
    }
    else if(n == 2) {
        cout<<"1\n";
    }
    else {
        cout<<sum<<"\n";
    }
}