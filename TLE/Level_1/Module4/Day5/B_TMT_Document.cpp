#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;

    while(a--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int left = -1, right = -1;
        int m = 0, t = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'M') {
                m++;
            }
            else {
                t++;
            }
        }
        
        if(m * 2 != t) {
            cout<<"NO\n";
            continue;
        }

        int mid = -1;

        t = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'T') {
                t++;
            }

            if(t == n/3) {
                mid = i;
                break;
            }
        }
        int val = 0;
        string ans = "YES\n";
        for(int i = 0; i < n; i++) {
            if(s[i] == 'M') {
                val--;
            }
            else if(i <= mid) {
                val++;
            }

            if(val < 0) {
                ans = "NO\n";
                break;
            }
        }
        if(ans == "YES\n") {
            for(int i = n - 1; i >= 0; i--) {
                if(s[i] == 'M') {
                    val--;
                }
                else if(i > mid) {
                    val++;
                }

                if(val < 0) {
                    ans = "NO\n";
                    break;
                }
            }
        }

        cout<<ans;
        

        
    }
}