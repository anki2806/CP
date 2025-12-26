#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    int dir = 1;
    int right = 0, up = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'S') {
            if(dir == 1) {
                right++;
            }
            else if(dir == 2) {
                up--;
            }
            else if(dir == 3) {
                right--;
            }
            else {
                up++;
            }
        }
        else {
            dir = (dir + 1) % 4;
        }
    }
    cout<<right<<" "<<up<<"\n";
}