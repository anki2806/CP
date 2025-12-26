#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, bool &flag) {
    int left = 0, right = s.size() - 1;

    while(left <= right) {
        if(s[left] != s[0] || s[right] != s[0]) {
            flag = false;
        }
        if(s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;

        while(k > 0) {
            
            bool flag = true;
            bool isPal = isPalindrome(s, flag);
            if(flag) {
                for(int i = 0; i < k; i++) {
                    s += s[n- 1];
                    n++;
                }
                break;
            }
            if(isPal) {
                s += s[n- 1];
                n++;
            }
            else {
                s = s.substr(0, (n/2));
                n /= 2;
            }
            k--;
        }
        
        cout<<s<<"\n";
        
    }
}