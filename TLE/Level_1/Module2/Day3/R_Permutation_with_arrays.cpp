#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
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
    bool flag = true;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            flag = false;
            break;
        }
    }
    
    if(flag) {
        cout<<"yes\n";
    }
    else {
        cout<<"no\n";
    }
}