#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin>>n>>a>>b;
    bool flag = false;
    int f = 0, r = 0;
    if(b > a) {
        int len = n/b;
        for(int i = 0; i <= len + 1; i++) {
            int val = n - (b * i);
            if(val >= 0 && val % a == 0) {
                flag = true;
                r = i;
                f = val / a;
                break;
            }
        }
    }
    else {
        int len = n/a;
        for(int i = 0; i <= len + 1; i++) {
            int val = n - (a * i);
            if(val >= 0 && val % b == 0) {
                flag = true;
                f = i;
                r = val / b;
                break;
            }
        }
    }
    

    if(flag == false) {
        cout<<"NO\n";
    }
    else {
        cout<<"YES\n";
        cout<<f<<" "<<r<<"\n";
    }
}