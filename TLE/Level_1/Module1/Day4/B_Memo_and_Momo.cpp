#include<iostream>
using namespace std;

int main() {
    long long int a,b,k;
    cin>>a>>b>>k;
    if(a % k == 0) {
        if(b % k == 0) {
            cout<<"Both"<<"\n";
        }
        else {
            cout<<"Memo"<<"\n";
        }
    }
    else if(b % k == 0) {
        cout<<"Momo"<<"\n";
    }
    else {
        cout<<"No One"<<"\n";
    }
}