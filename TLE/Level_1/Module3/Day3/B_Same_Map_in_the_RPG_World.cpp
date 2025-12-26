#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    char arrA[a][b];
    char arrB[a][b];

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cin>>arrA[i][j];
        }
    }
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cin>>arrB[i][j];
        }
    }

    for(int s = 0; s < a; s++) {
        for(int t = 0; t < b; t++) {

            bool flag = true;

            for(int i = 0; i < a; i++) {
                for(int j = 0; j < b; j++) {
                    if(arrA[i][j] != arrB[(i + s) % a][(j + t) % b]) {
                        flag = false;
                        break;
                    }        
                }
                if(!flag) {
                    break;
                }
            }
            if(flag) {
                cout<<"Yes\n";
                return 0;
            }

        }
    }
    cout<<"No\n";

}