#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int> vec;
    int a = n;
    int zero = 0;

    while (n > 0)
    {
        if(n % 10 > 0) {
            vec.push_back(n % 10);
        }
        else {
            zero++;
        }
        n /= 10;
    }

    sort(vec.begin(),vec.end());
    int ans = 0;
    for(int i = 0; i < vec.size(); i++) {
        
        if(i == 1 && zero > 0) {
            while(zero--) {
                ans *= 10;
            }
        }
        if(i == 0) {
            ans = vec[i];
        }
        else {
            ans = ans * 10 + vec[i];
        }
        
    }    
    if(vec.size() == 1) {
        while(zero--) {
            ans *= 10;
        }
    }
    cout<<ans<<"\n";
    
}