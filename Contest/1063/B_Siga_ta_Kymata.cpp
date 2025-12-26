#include<iostream>
#include<climits>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        int count = 0;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            if(arr[i] == '1') {
                count++;
            }
        }

        string s;
        cin>>s;
        int x = -1, y = -1;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) {
                x = i;
            }
            if(arr[i] == n) {
                y = i;
            }
        }

        if(s[0] == '1' || s[n - 1] == '1' || s[x] == '1' || s[y] == '1') {
            cout<<"-1\n";
        }
        else {
            cout<<"5\n";
            if(x > y) {
                swap(x,y);
            }
            cout<<1<<" "<<x + 1<<"\n";
            cout<<1<<" "<<y + 1<<"\n";
            cout<<x + 1<<" "<<y + 1<<"\n";
            cout<<x + 1<<" "<<n<<"\n";
            cout<<y + 1<<" "<<n<<"\n";
        }

    }
}