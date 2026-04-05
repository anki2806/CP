#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m;
    cin>>n>>m;

    multiset<int> v;

    for(int i = 0; i < n; i++) {
        int ele;
        cin>>ele;
        v.insert(ele);
    }
    int ele = 0;
    for(int i = 0; i < m; i++) {
        cin>>ele;
        if(v.size() == 0) {
            cout<<-1<<"\n";
            continue;
        }
        if(ele < *v.begin()) {
            cout<<"-1\n";
            continue;
        }
        auto ind = v.upper_bound(ele);
        ind--;
        cout<<*ind<<"\n";
        v.erase(ind);
    }   
}

int main() {
    ANKIT
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}