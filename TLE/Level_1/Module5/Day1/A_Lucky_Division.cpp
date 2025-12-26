#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[] = {4, 7, 47, 44, 74, 77, 444, 447, 474, 477, 747, 774, 777};

    bool flag = false;
    for(int ele : arr) {
        if(n % ele == 0) {
            cout<<"YES\n";
            flag = true;
            break;
        }
    }
    if(!flag) {
        cout<<"NO\n";
    }

}