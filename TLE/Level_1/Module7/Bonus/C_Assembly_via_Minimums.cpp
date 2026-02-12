#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int m = (n * (n - 1)) / 2;
    vector<int> v(m);

    for(int i = 0; i < m; i++) {
        cin>>v[i];
    }
    sort(all(v));
    vector<int> result(n, 1e9);
    int j = 0;

    int count = 1;
    
    for(int i = 1; i < m; i++) {
        if(v[i] == v[i - 1]) {
            count++;
        }
        else {
            j = 0;
            while(count > 0) {
                if(count > (n - 1 - j) && result[j] == 1e9) {
                    count = count - (n - 1 - j);
                    result[j] = v[i - 1];
                    j++;
                }
                else if(count == (n - 1 - j) && result[j] == 1e9) {
                    result[j] = v[i - 1];
                    count = count - (n - 1 - j);
                }
                else {
                    j++;
                }
            }
            count = 1;
        }
    }
    j = 0;
    while(count > 0) {
        if(count > (n - 1 - j) && result[j] == 1e9) {
            count = count - (n - 1 - j);
            result[j] = v[m - 1];
            j++;
        }
        else if(count == (n - 1 - j) && result[j] == 1e9) {
            result[j] = v[m - 1];
            count = count - (n - 1 - j);
        }
        else {
            j++;
        }
    }

    for(int &ele : result) {
        cout<<ele<<" ";
    }
    cout<<"\n";
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