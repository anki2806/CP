#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> primes;
    primes.push_back(2);
    for(int i = 3; i <= n; i += 2) {
        bool flag = true;
        
        for(int j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                flag = false;
                break;
            }
        }
        if(flag) {
            // cout<<i<<" ";
            primes.push_back(i);
        }
    }

    int count = 0;
    bool flag2 = false;
    for(int i = 0; i < primes.size(); i++) {
        int val = primes[i];
        for(int j = 0; j < i; j ++) {
            if(primes[j] + primes[j + 1] + 1 == val) {
                count++;
                break;
            }
            else if(primes[j] + primes[j + 1] + 1 > val) {
                break;
            }
        }
        if(count >= k) {
            flag2 = true;
            break;
        }
    }
    if(flag2) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
}