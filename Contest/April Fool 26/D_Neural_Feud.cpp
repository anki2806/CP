#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;   
    
    switch (n)
    {
    case 1:
        cout<<"drive\n";
        break;
    case 2:
        cout<<"No\n";
        break;
    case 3:
        cout<<"No";
        break;
    default:
        break;
    }
}

int main() {
    ANKIT

//   sieve(); // Uncomment if you need primes

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}