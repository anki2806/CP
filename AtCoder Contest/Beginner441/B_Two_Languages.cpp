#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;

    int len;
    cin>>len;

    string arr[len];
    for(int i = 0; i < len; i++) {
        cin>>arr[i];
    }

    for(int i = 0; i < len; i++) {
        bool findT = true;
        bool findA = true;
        for(char ch : arr[i]) {
            if(a.find(ch) == string::npos) {
                findT = false;
            }
            if(b.find(ch) == string::npos) {
                findA = false;
            }
        }
        if((findT == true && findA == true) || (findT == false && findA == false)) {
            cout<<"Unknown\n";
        }
        else if(findT) {
            cout<<"Takahashi\n";
        }
        else {
            cout<<"Aoki\n";
        }
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