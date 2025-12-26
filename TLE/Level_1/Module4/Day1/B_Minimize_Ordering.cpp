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

    string s;
    cin>>s;

    int ind = 0;
    char big = s[0];

    char ch[s.size()];

    for(int i = 0; i < s.length(); i++) {
        ch[i] = s[i];
    }

    sort(ch, ch + s.length());
    for(char c : ch) {
        cout<<c;
    }
    cout<<"\n";
    
    
}