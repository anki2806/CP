#include<bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        for(int i = 0; i < n; i++) {
            cin>>b[i];
        }
        long long maxK = 0;
        long long minK = 0;
        for(int i = 0; i < n; i++) {
            long long valA = max(maxK - a[i], b[i] - minK);
            long long valB = min(b[i] - maxK, minK - a[i]);

            maxK = max(valA, valB);
            minK = min(valA, valB);
        }

        cout<<maxK<<"\n";

    }
    
}