#include<iostream>

using namespace std;

int main() {
    int k,s;
    int ans = 0;
    cin>>k>>s;

    for(int i = 0; i <= k; i++) {
        for(int j = 0; j <= k; j++) {
            if(i + j > s) {
                break;
            }
            else {
                if(s - (i + j) <= k)
                ans++;
            }
        }
    }
    cout<<ans;
}