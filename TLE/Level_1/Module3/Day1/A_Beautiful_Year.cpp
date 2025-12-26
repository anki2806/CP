#include<iostream>
#include<set>
using namespace std;

int main() {
    int n;
    cin>>n;

    
    while(true) {
        n++;
        int k = n;
        set<int> set;
        while(k > 0) {
            set.insert(k%10);
            k /= 10;
        }
        if(set.size() == 4) {
            cout<<n<<"\n";
            break;
        }
    }
}