#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;

    vector<int> v(n, 0);
    cout<<"HELLOOOOO";
    vector<pair<int, int>> a;
    int len = 0;
    for(int i = 0; i < n; i++) {
        cin>>v[i];
        if(v[i] < i + 1) {
            a.push_back({v[i], i + 1});
            len = i + 1;
        }
    }

    vector<int> cal(len + 1, 0);

    for(int i = 0; i < a.size(); i++) {
        if(a[i].second + 1 < cal.size()) {
            cal[a[i].second + 1]++;
        }
        // cal[a[i].second + 1]++;
    }

    for(int i = 0; i < cal.size(); i++) {
        cout<<cal[i]<<" ";
    }
    cout<<"HELLO ";

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