#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<ll> a(n);
        int eSize = 0, oSize = 0;
        vector<ll> e;
        vector<ll> o;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            if(a[i] % 2 == 0) {
                e.push_back(a[i]);
            }
            else {
                o.push_back(a[i]);
            }
        }

        if(e.size() == n) {
            for(int i = 0; i < n; i++) {
                cout<<"0 ";
            }
            cout<<"\n";
            continue;
        }

        sort(e.begin(), e.end());
        sort(o.begin(), o.end());

        if(o.size() == n) {
            for(int i = 0; i < n; i++) {
                if(i % 2 == 0) {
                    cout<<o.back()<<" ";
                }
                else {
                    cout<<"0 ";
                }
            }
            cout<<"\n";
            continue;
        }

        vector<ll> ans(n);
        ans[0] = o.back();

        for(int i = 1; i < n; i++) {
            if(e.size() == 0) {
                ans[i] = ans[i - 2];
            }
            else {
                ans[i] = ans[i - 1] + e.back();
                e.pop_back();
            }
        }

        if(accumulate(a.begin(), a.end(), 0LL) % 2 == 0) {
            ans[n - 1] = 0;
        }
        


        for(int i = 0; i < n; i++) {
            cout<<ans[i]<<" ";
        }

        cout<<"\n";


    }
}