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

    int n;
    cin>>n;

    int i = 18, count = 0;
    
    while(count < n) {
        i++;
        if(digitSum(i) == 10) {
            count++;
        }
        
    }
    cout<<i<<"\n";
    
}


// 19 28 37 46 55 64 73 82 91 100 109 118 127 136 145 154 163 172 181 190 199