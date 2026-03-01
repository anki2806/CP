#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;

    stack<string> stk;
    set<string> set;

    for(int i = 0; i < n; i++) {
        string s;
        cin>>s;
        stk.push(s);
    }

    while(!stk.empty()) {
        if(set.count(stk.top()) == 0) {
            cout<<stk.top()<<"\n";
            set.insert(stk.top());
        }
        stk.pop();
    }
}

int main() {
    ANKIT

    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}