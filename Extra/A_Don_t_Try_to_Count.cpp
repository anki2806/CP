#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        bool flag = false;
        int ans = 0;
        for(int i = 0; i < m && ans < 20; i++) {
            int idx = x.find(s);
            if(idx != string::npos) {
                cout << ans << "\n";
                flag = true;
                break;
            }
            x = x + x;
            ans++;
        }
        if(!flag) {
            cout<<-1<<"\n";
        }
    }
    return 0;
}