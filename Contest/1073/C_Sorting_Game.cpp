#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    string s;
    cin>>n;
    cin>>s;
   
    vector<int> ans;
    int left = 0, right = n - 1;
    while(left < right) {
        while(s[left] == '0') {
            left++;
        }
        while(s[right] == '1') {
            right--;
        }
        if(left < right && s[left] == '1' && s[right] == '0') {
            ans.pb(left + 1);
            ans.pb(right + 1);
            left++;
            right--;
        }
    }

    if(ans.size() == 0) {
        cout<<"Bob\n";
    }
    else {
        sort(all(ans));
        cout<<"Alice\n"<<ans.size()<<"\n";
        for(int i = 0; i < ans.size(); i++) {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
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