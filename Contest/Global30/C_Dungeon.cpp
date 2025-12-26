#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,m;
        cin>>n>>m;
        long long int len = n > m ? n : m;
        long long int a[len] = {0};
        long long int b[m];
        long long int c[m];
        vector<long long int> vec;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            vec.push_back(a[i]);
        }

        for(int i = 0; i < m; i++) {
            cin>>b[i];
        }

        for(int i = 0; i < m; i++) {
            cin>>c[i];
        }
        int ans = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] >= b[i]) {
                vec.push_back(max(a[i], c[i]));
                b[i] = INT_MAX + 10000;
            }
        }

        sort(vec.begin(), vec.end());
        sort(b, b + m);

        // for(long long int ele : vec) {
        //     cout<<ele<<" ";
        // }
        // cout<<"\n";

        // for(int i = 0; i < m; i++) {
        //     cout<<b[i]<<" ";
        // }

        // cout<<"done \n";

        int i = 0;
        int j = 0;
        while(i < m && j < vec.size()) {
            if(vec[j] < b[i]) {
                j++;
            }
            else {
                j++;
                i++;
                ans++;
            }
            
        }

        cout<<ans<<"\n";
        
    }
}