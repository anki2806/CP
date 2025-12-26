#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];
        int freq[105] = {0};

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            freq[arr[i]]++;
        }

        int ans = 0;
        bool done = false;

        for(int i = 0; i < 105; i++) {
            if(freq[i] >= 2) {
                continue;
            }
            else if(freq[i] == 1 && ans == 0 && !done ) {
                ans += i;
                done = true;
                continue;
            }
            else if(freq[i] == 1) {
                continue;
            }
            else{
                if(ans == 0 && !done) {
                    ans += (2 * i);
                    break;
                }
                else {
                    ans += i;
                    break;
                }
            }
        }

        cout<<ans<<"\n";
    }
}