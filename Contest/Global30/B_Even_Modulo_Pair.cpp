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

        int flag = false;
        if(arr[0] == 1) {
            cout<<arr[0]<<" "<<arr[1]<<"\n";
        }
        else {
            for(int i = 0; i < n; i++) {
                for(int j = i + 1; j < n; j++) {
                    if((arr[j] % arr[i]) % 2 == 0) {
                        flag = true;
                        cout<<arr[i]<<" "<<arr[j]<<"\n";
                        break;
                    }
                }
                if(flag) {
                    break;
                }
            }
            if(!flag) {
                cout<<"-1\n";
            }
        }
        

    }
}