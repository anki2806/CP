#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    bool easy = true;
    int a;

    for(int i = 0; i < n; i++) {
        cin>>a;
        if(a == 1) {
            easy = false;
        }
    }
    if(easy) {
        cout<<"EASY"<<"\n";
    }
    else {
        cout<<"HARD"<<"\n";
    }
}