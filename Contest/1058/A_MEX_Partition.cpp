#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        int val[101] = {0};
        for(int i = 0; i < n; i++) {
            val[arr[i]]++;
        }

        for(int i = 0; i < 101; i++) {
            if(val[i] == 0) {
                cout<<i<<"\n";
                break;
            }
        }

    }
}