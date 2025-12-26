#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        string s;
        cin>>s;

        int left = 0;
        int right = 0;

        int n = s.size();
        int ans = 0;
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '*') {
                if(i > 0) {
                    if(s[i - 1] == '>' || s[i - 1] == '*') {
                        ans = -1;    
                        break;
                    }
                }
                if(i < n - 1) {
                    if(s[i + 1] == '<' || s[i + 1] == '*') {
                        ans = -1;
                        break;
                    }
                }
            }
            else if(s[i] == '>' && i + 1 < n && s[i + 1] == '<') {
                ans = -1;
                break;
            }
            else if(s[i] == '<' && i > 0 && s[i - 1] == '>') {
                ans = -1;
                break;
            }
        }
        if(n == 1) {
            cout<<"1\n";
        }
        else if(ans != -1) {
            int ind = 0;
            int currLeft = 1, currRight = 1;
            for(int i = 0; i < n; i++) {
                if(s[i] == '<') {
                    left++;
                }
                else if(s[i] == '*') {
                    left++;
                    break;
                }
                else {
                    break;
                }
            }
            for(int i = n - 1; i >= 0; i--) {
                if(s[i] == '>') {
                    right++;
                }
                else if(s[i] == '*') {
                    right++;
                    break;
                }
                else {
                    break;
                }
            }
            cout<<max(left,right)<<"\n";
        }
        else {
            cout<<ans<<"\n";
        }
    }
}