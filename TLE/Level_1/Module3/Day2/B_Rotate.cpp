#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][n];

    for(int i = 0; i < n; i++) {
        string s;
        cin>>s;
        for(int j = 0; j < n; j++) {
            arr[i][j] = s[j] - '0';
        }
    }
    int val = arr[1][0];
    int left = 0, right = n - 1, up = 0, down = n - 1;
    int curr = 0;
    for(int i = left; i <= right; i++) {
        curr = arr[up][i];
        arr[up][i] = val;
        val = curr;
    }
    up++;
    for(int i = up; i <= down; i++) {
        curr = arr[i][right];
        arr[i][right] = val;
        val = curr;
    }
    right--;
    if(left < right) {
        for(int i = right; i >= left; i--) {
            curr = arr[down][i];
            arr[down][i] = val;
            val = curr;
        }
        down--;
    }
    if(up < down) {
        for(int i = down; i >= up; i--) {
            curr = arr[i][left];
            arr[i][left] = val;
            val = curr;
        }
        left++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}