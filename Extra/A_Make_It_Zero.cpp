#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n;i++) {
        cin>>v[i];
    }

    if(n % 2 == 0) {
        cout<<"2\n";
        cout<<1<<" "<<n<<"\n";
        cout<<1<<" "<<n<<"\n";
    }
    else {
        cout<<"4\n";
        cout<<1<<" "<<n<<"\n";
        cout<<1<<" "<<n - 1<<"\n";
        cout<<n - 1<<" "<<n<<"\n";
        cout<<n - 1<<" "<<n<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//   sieve(); // Uncomment if you need primes

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}