#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int n, k;
    cin>>n>>k;

    if(k == 1) {
        cout<<n<<"\n";
    }
    else {
        cout<<((n - 1) * k) + 1<<"\n";
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