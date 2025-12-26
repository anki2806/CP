#include<iostream>
#include<set>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,k;
        cin>>n>>k;

        char arr[n][k];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < k; j++) {
                cin>>arr[i][j];
            }
        }

        set<int> set;

        for(int j = 0; j < k; j++) {
            for(int i = 1; i < n; i++) {
                if(arr[i][j] != arr[0][j] && set.find(i) == set.end()) {
                    set.insert(i);
                }
            }
        }

        cout<<n-set.size()<<"\n";
    }
}