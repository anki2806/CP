#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    vector<int> v(7);

    for(int i = 0; i < 7; i++) {
        cin>>v[i];
    }
    int sum = 0;
    sort(all(v));
    for(int i = 0; i < 7; i++) {
        if(i < 6) {
            sum -= (v[i]);
        }
        else {
            sum += v[i];
        }
    }
    cout<<sum<<"\n";
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