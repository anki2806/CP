#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n; 
        set<int> set;

        for(int i = 0; i < n; i++) {
            int a;
            cin>>a;
            set.insert(a);
        }
        int a = set.size();
        cout<<a + a - 1<<"\n";
    }
    return 0;
}