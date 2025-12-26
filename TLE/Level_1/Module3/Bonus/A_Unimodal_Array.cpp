#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int left = 0;
    int right = n - 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i - 1]) {
            left++;
        }
        else {
            break;
        }
    }

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] > arr[i + 1]) {
            right--;
        }
        else {
            break;
        }
    }
    int flag = true;
    for(int i = left; i < right; i++) {
        if(arr[i] != arr[i + 1]) {
            flag = false;
            break;
        }
    }

    if(flag) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
}