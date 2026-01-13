#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--) {
        long long n, x, y;
        cin>>n>>x>>y;

        string s;
        cin>>s;

        long long countFour = 0, countEight = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '4') {
                countFour++;
            }
            else {
                countEight++;
            }
        }

        if(x == 0 && y == 0) {
            cout<<"YES\n";
            continue;
        }

        if(x < 0) {
            x = -x;
        }
        if(y < 0) {
            y = -y;
        }
        
        int mid = countEight + (countFour / 2);

        if(x <= n && y <= n) {
            if(countFour == 0) {
                cout<<"YES\n";
            }
            else {
                if((x + y) <= (n + mid - countFour / 2)) {
                    cout<<"YES\n";
                }
                else {
                    cout<<"NO\n";
                }
            }
        }
        else {
            cout<<"NO\n";
        }
    }
}