#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int a, b;
    cin>>a>>b;

    a %= b;

    if(a == 0) {
        cout<<"0\n";
    }
    else {
        cout<<b-a<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}