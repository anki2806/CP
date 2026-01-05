#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int A,B;
    cin>>A>>B;
    if(B-A + 1 == 1) {
        cout<<"1\n";
    }
    else if(B-A + 1 <= 3) {
        if(A % 2 == 0) {
            cout<<"2\n";
        }
        else {
            cout<<"1\n";
        }
    }
    else {
        ll a = B - A + 1;
        for(ll i = a; i >= 2; i--) {
            ll div = A / i;
            if(A % i == 0 && B >= ((div + 1) * i)) {
                cout<<i<<"\n";
                return;
            }
            else if(A % i != 0 && B >= ((div + 2) * i)) {
                cout<<i<<"\n";
                return;
            }
        }
        cout<<1<<"\n";
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