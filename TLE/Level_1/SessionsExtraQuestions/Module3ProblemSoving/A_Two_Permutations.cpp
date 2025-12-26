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
        int n, a, b;
        cin>>n>>a>>b;
        if(n - (a + b) >= 2 || (a + b) == 2 * n) {
            cout<<"Yes\n";
        }
        else if(a + b > n) {
            cout<<"No\n";
        }
        else {
            cout<<"No\n";
        }
    }
}