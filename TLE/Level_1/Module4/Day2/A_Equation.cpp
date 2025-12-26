#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long n;
    cin>>n;

    if(n % 2 == 0) {
        cout<<10 + n<<" 10\n";
    }
    else {
        cout<<9 + n<<" 9\n";
    }
}