#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    string s;
    cin>>s;
    int count = 0;
    int n = s.size();
    
    

    for(int i = 1; i < n - 1; i++) {
        if(s[i] == 'u') {
            if(s[i - 1] != 's') {
                count++;
                s[i - 1] = 's'; 
            }
            if(s[i + 1] != 's') {
                count++;
                s[i + 1] = 's';
            }
        }
    }

    if(s[0] != 's') {
        count++;
    }
    
    if(s[n - 1] != 's') {
        count++;
    }

    cout<<count<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}