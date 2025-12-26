#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,m; cin>>n>>m;
 
        
    
        int x= n^m;
        if (n==m){
            cout<<0<<endl;
        }
        else if (x<=n){
            cout<<1<<endl;
            cout<<x<<endl;
        }else if (n>m){
            cout<<2<<endl;
            cout<<m<<" "<<n<<endl;
        }else{
            cout<<-1<<endl;
        }

    }
}