#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }

    sort(all(v));

    int countZero = 0;
    int countOne = 0;

    for(int i = 0; i < n; i++) {
        if(v[i] == 0) {
            countZero++;
        }
        else if(v[i] == 1) {
            countOne++;
        }
    }

    if(countZero == 0) {
        cout<<"NO\n";
    }
    else {
        if(countZero == 1) {
            cout<<"YES\n";
        }
        else {
            if(countOne > 0) {
                cout<<"YES\n";
            }
            else {
                cout<<"NO\n";
            }
        }
    }    

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