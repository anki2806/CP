#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

int sumDigit(int n) {
    int sum = 0;
    while(n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
void solve() {
    ll n;
    cin>>n;
    int count = 0;
    for(int i = n - 100; i <= n + 100; i++) {
        if(i - sumDigit(i) == n) {
            count++;
        }
    }
    cout<<count<<"\n";
}

int main() {
    ANKIT

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}