#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        string s;
        cin>>n;
        cin>>s;

        int cont = 0;
        int count = 0;
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '.') {
                cont++;
                count++;
                if(cont == 3) {
                    break;
                }
            }
            else {
                cont = 0;
            }
        }
        if(cont == 3) {
            cout<<2<<"\n";
        }
        else {
            cout<<count<<"\n";
        }
    }
    return 0;
}