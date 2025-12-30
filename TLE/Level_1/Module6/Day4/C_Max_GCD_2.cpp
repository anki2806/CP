#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

// Euclidean Algorithm — O(log N)
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// LCM — overflow-safe
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    int A,B;
    cin>>A>>B;
    if(B-A == 1) {
        cout<<"1\n";
    }
    else if(B-A <= 3) {
        if(A % 2 == 0) {
            cout<<"2\n";
        }
        else {
            cout<<"1\n";
        }
    }
    else {
        
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}