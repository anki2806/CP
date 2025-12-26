#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        string s;
        int n;
        cin>>n>>s;

        for(int i = 0; i < n; i++) {
            s[i] = tolower(s[i]);
        }

        // cout<<s<<" \n";

        int arr[26] = {0};
        for(int i = 0; i < n; i++) {
            arr[s[i] - 'a']++;
        }

        
        int j = 0;
        bool flag = true;
        string meow = "meow";
        for(int i = 0; i < n; i++) {
            if((s[i] == 'm' || s[i] == 'e' || s[i] == 'o' || s[i] == 'w')) {
                if(s[i] == meow[j]) {
                    continue;
                }
                else if(j < 3 && s[i] == meow[j + 1]) {
                    j++;
                }
                else {
                    flag = false;
                    break;
                }
            }
            else {
                flag = false;
                break;
            }
        }
        if(arr['m' - 'a'] > 0 && arr['e' - 'a'] > 0 && arr['o' - 'a'] > 0 && arr['w' - 'a'] > 0) {
            if(flag && j == 3) {
                cout<<"YES\n";
            }
            else {
                cout<<"NO\n";
            }
        }
        else {
            cout<<"NO\n";
        }
        
    }
}