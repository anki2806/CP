#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }

    int i = 0, j = 0;
    int sum = 0;
    int len = 0;
    // 1 1 1 1 1 1 1  1 1 1  99  
    while(j < n) {

        sum += v[j]; // 10 + 99 = 109

        while(sum >= k) { // 109
            sum -= v[i]; // 120 - 30 = 90
            i++; // 
        }
        len = max(len, j - i + 1);

        j++;
    }
    cout<<len<<"\n";
}