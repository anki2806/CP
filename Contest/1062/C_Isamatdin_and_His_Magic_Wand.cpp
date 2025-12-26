#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[n];
        bool odd = false, even = false;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            if(arr[i] % 2 == 0) {
                even = true;
            }
            else {
                odd = true;
            }
        }
        if(odd && even) {
            sort(arr, arr + n);
        }

        for(int i = 0; i < n; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}