#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);
set<string> getAllSubstrings(string s) {
    set<string> st;
    st.insert(s);
    for(int i = 1; i <= s.length(); i++) {
        for(int j = 0; j < s.length(); j++) {
            if(j + i <= s.length()) {
                st.insert(s.substr(j, i));
            }
        }
    }
    return st;
}
void solve() {
    string a, b;
    cin>>a>>b;
    if(a == b) {
        cout<<0<<"\n";
        return;
    }
    set<string> allSubstringA = getAllSubstrings(a);
    set<string> allSubstringB = getAllSubstrings(b);
    int len = 0;
    int totalLen = a.length() + b.length();
    int ans = totalLen;
    for(string s : allSubstringA) {
        // cout<<s<<" ";
        if(allSubstringB.count(s) && s.length() > len) {
            len = s.length();
        }
    }
    cout<<totalLen - (2 * len)<<"\n";

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