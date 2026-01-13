#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int n;
    cin>>n;

    if(n == 1 || n == 2 || n == 3) {
        cout<<n<<"\n";
    }
    else if(n % 2 == 1) {
        cout<<"1\n";
    }
    else {
        cout<<"0\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}