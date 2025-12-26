#include<iostream>
#include<vector>
using namespace std;
int minDistance(int x1, int x2, int y1, int y2) {

}
int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int matrix[n+1][n+1];

        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= n; j++) {
                matrix[i][j] = 0;
            }
        }
        
        int Kx, Ky, Gx, Gy;
        cin>>Kx>>Ky>>Gx>>Gy;
        int ans = 0;

        if(Kx == Gx && Ky == Gy) {
            ans = 1;
        }
        else {
            int xDir = 0, yDir;

            if(Gx < Kx) {
                xDir = 1;
            }
            else {
                xDir = -1;
            }

            if(Gy < Ky) {
                yDir = 1;
            }
            else {
                yDir = -1;
            }

            if(xDir == 1) {
                ans += (n+1 - Kx);
            }
            else {
                ans += Kx;
            }

            if(yDir == 1) {
                ans = max(ans, ((n + 1) - Ky));
            }
            else {
                ans = max(ans, Ky);
            }
        }
        cout<<ans<<"\n";
    }
}