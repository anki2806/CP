#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(int t) {
    int n, r;
    cin>>n>>r;

    unordered_map<int, set<int>> v;
    bool flag = true;
    for(int i = 0; i < r; i++) {
        int a, b;
        cin>>a>>b;
    
        if(v.find(a) == v.end()) {
            // cout<<a<<" "<<b<<" up "<<v[a].count(b)<<"\n";
            set<int> s;
            s.insert(b);
            v[a] = s;
            // for(int ele : v[a]) {
            //     cout<<ele<<" ele ";
            // }
        }
        else {
            // cout<<a<<" "<<b<<" "<<v[a].count(b)<<"\n";
            // for(int ele : v[a]) {
            //     cout<<ele<<" ele ";
            // }
            if(v[a].count(b) == 0) {
                v[a].insert(b);
            }
            else {
                flag = false;
            }
        }
    }
    
    if(!flag) {
        cout<<"Scenario #"<<t<<": impossible\n";
        return;
    }

    cout<<"Scenario #"<<t<<": possible\n";
}

int main() {
    ANKIT
    int t = 1;
    cin >> t;
    int a = 1;
    while (t--) {
        solve(a);
        a++;
    }
    return 0;
}