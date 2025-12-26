#include<iostream>

using namespace std;

int main() {
    int k;
    cin>>k;

    int h = k / 60;
    int m = k % 60;

    int hh = (21 + h) % 24;
    int mm = m;
    
    cout<<hh<<":";
    if(mm < 10) {
        cout<<"0";
    }
    cout<<mm<<"\n";
}