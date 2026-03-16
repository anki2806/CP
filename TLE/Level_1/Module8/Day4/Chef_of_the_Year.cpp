#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    int N, M;
    cin>>N>>M;
    
    unordered_map<string, string> map;
    
    for(int i = 0; i < N; i++) {
        string n, c;
        cin>>n>>c;
        map.insert({n, c});
    }
    vector<string> name;
    vector<string> country;
    for(int i = 0; i < M; i++) {
        string n;
        cin>>n;
        name.push_back(n);
        country.push_back(map[n]);
    }
    
    sort(name.begin(), name.end());
    sort(country.begin(), country.end());
    int n = country.size();
    string ans = "";
    int count = 1;
    int max = 0;
    for(int i = 1; i < n; i++) {
        if(country[i] == country[i - 1]) {
            count++;
        }
        else {
            if(count > max) {
                max = count;
                ans = country[i - 1];
            }
            count = 1;
        }
    }
    if(count > max) {
        ans = country[n - 1];
    }
    cout<<ans<<"\n";
    n = name.size();
    count = 1;
    max = 0;
    for(int i = 1; i < n; i++) {
        if(name[i] == name[i - 1]) {
            count++;
        }
        else {
            if(max < count) {
                max = count;
                ans = name[i - 1];
            }
            count = 1;
        }
    }
    if(count > max) {
        ans = name[n - 1];
    }
    cout<<ans<<"\n";
    
}

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}