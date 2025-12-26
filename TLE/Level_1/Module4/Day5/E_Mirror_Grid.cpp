#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> vec1(n, vector<int>(n, 0));

        for(int i = 0; i < n; i++) {
            string row;
            cin>>row;
            for(int j = 0; j < n; j++) {
                vec1[i][j] = row[j] - '0';
            }
            
        }
        
        int ans = 0;
        for(int i = 0; i < n / 2; i++) {
            for(int j = 0; j < (n + 1) / 2; j++) {
                int sum  = 0;
                sum += vec1[i][j];
                sum += vec1[n - 1 - i][n - 1 - j];
                sum += vec1[n - 1 - j][i];
                sum += vec1[j][n - 1 - i];
                
                if(sum == 1 || sum == 3) {
                    ans += 1;
                }
                else if(sum == 2 || sum == 3) {
                    ans += 2;
                }
            }
        }

        cout<<ans<<"\n";
    }
}