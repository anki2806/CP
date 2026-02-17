#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string str;
    cin>>str;
    int arr[26] = {0};
    int n = str.size();
    for(int i = 0; i < n; i++) {
        arr[str[i] - 'a']++;
    }
    int ans = 0;
    for(int i = 0; i < 26; i++) {
        ans += (arr[i] < 3) ? arr[i] : 2;
    }
    cout<<ans/2<<"\n";

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