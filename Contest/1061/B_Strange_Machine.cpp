#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n, q;
        cin>>n>>q;

        string s;
        cin>>s;

        int arr[q];

        for(int i = 0; i < q; i++) {
            cin>>arr[i];
        }
        int isBPresent = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'B') {
                isBPresent = true;
                break;
            }
        }
        
        for(int i = 0; i < q; i++) {
            int j = 0, ans = 0;
            if(!isBPresent) {
                ans = arr[i];
            }
            else {
                while(arr[i] > 0) {
                    if(s[j % n] == 'B') {
                        arr[i] /= 2;
                    }
                    else {
                        arr[i]--;
                    }
                    j++;
                    ans++;
                }
            }
            
            cout<<ans<<"\n";
        }
    }
}