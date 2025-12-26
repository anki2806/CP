#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        map<int, int> map;

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            
            map[arr[i]]++;
        }
        if(map.size() == 1) {
            cout<<"Yes"<<"\n";
        }
        else if(map.size() > 2) {
            cout<<"No"<<"\n";
        }
        else {
            int i = 0;
            int count1 = 0, count2 = 0;
            for(auto i : map) {
                if(count1 == 0) {
                    count1 = i.second;
                }
                else {
                    count2 = i.second;
                }
            }
            if(abs(count1 - count2) <= 1) {
                cout<<"Yes"<<"\n";
            }
            else {
                cout<<"No"<<"\n";
            }
        }
        



    }
}