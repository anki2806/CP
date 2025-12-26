#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    int m = arr[0];
    int ind = 0;
    for(int i = 1; i < n; i++) {
        if(m < arr[i]) {
            m = arr[i];
            ind = i;
        }
    }
    cout<<(ind > (n - ind)? ind : n - ind)<<"\n";


}