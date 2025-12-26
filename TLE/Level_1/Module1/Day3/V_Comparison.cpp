#include<iostream>
using namespace std;

int main() {
    int a,b;
    string s;

    cin>>a>>s>>b;

    if(s[0] == '<') {
        if(a < b) {
            cout<<"Right"<<"\n";
        }
        else {
            cout<<"Wrong"<<"\n";
        }
    }
    else if(s[0] == '>') {
        if(a > b) {
            cout<<"Right"<<"\n";
        }
        else {
            cout<<"Wrong"<<"\n";
        }
    }
    else {
        if(a == b) {
            cout<<"Right"<<"\n";
        }
        else {
            cout<<"Wrong"<<"\n";
        }
    }
    
}