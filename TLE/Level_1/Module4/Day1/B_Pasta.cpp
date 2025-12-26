#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;

    int a[n];
    int b[m];

    for(int i = 0; i < n; i++) {
        cin>>a[i];
        // cout<<a[i]<<" ";
    }

    for(int i = 0; i < m; i++) {
        cin>>b[i];
    }

    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0;
    bool flag = true;

    while(i < n && j < m) {
        // cout<<a[i]<<" "<<b[j];
        if(a[i] < b[j]) {
            i++;
        }
        else if(a[i] == b[j]) {
            i++;
            j++;
        }
        else {
            flag = false;
            break;
        }
        
    }

    if(j < m) {
        flag = false;
    }

    if(flag) {
        cout<<"Yes\n";
    }
    else {
        cout<<"No\n";
    }

    
}