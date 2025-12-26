#include<bits/stdc++.h>
using namespace std;

int digitSum(int n) {
    int sum = 0;

    while(n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int a[n], b[n];

        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }

        for(int i = 0; i < n; i++) {
            cin>>b[i];
        }

        int count = 0, ind = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] + b[i] == 1) {
                count++;
                ind = i + 1;
            }
        }

        if(count % 2 == 1) {
            if(ind % 2 == 0) {
                cout<<"Mai\n";
            }
            else {
                cout<<"Ajisai\n";
            }
        }
        else {
            cout<<"Tie\n";
        }
    }
}