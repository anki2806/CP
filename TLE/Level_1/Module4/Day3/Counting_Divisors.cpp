#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int count = 0;
        int a = (int)sqrt(n);

        for(int i = 1; i <= a; i++) {
            if(n % i == 0) {
                count++;
            }
        }

        count *= 2;

        if(a * a == n) {
            count--;
        }

        cout<<count<<"\n";
    }
}