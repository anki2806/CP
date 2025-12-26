#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int a, b;
        cin>>a>>b;

        int xk, yk;
        cin>>xk>>yk;

        int xq, yq;
        cin>>xq>>yq;

        vector<pair<int,int>> arr;
        vector<pair<int,int>> arrQ;

        arr.push_back(make_pair(xk + a, yk + b));
        arr.push_back(make_pair(xk + a, yk - b));
        arr.push_back(make_pair(xk - a, yk + b));
        arr.push_back(make_pair(xk - a, yk - b));

        arr.push_back(make_pair(xk + b, yk + a));
        arr.push_back(make_pair(xk - b, yk + a));
        arr.push_back(make_pair(xk + b, yk - a));
        arr.push_back(make_pair(xk - b, yk - a));


        arrQ.push_back(make_pair(xq + a, yq + b));
        arrQ.push_back(make_pair(xq + a, yq - b));
        arrQ.push_back(make_pair(xq - a, yq + b));
        arrQ.push_back(make_pair(xq - a, yq - b));

        arrQ.push_back(make_pair(xq + b, yq + a));
        arrQ.push_back(make_pair(xq - b, yq + a));
        arrQ.push_back(make_pair(xq + b, yq - a));
        arrQ.push_back(make_pair(xq - b, yq - a));

        vector<pair<int,int>> ansArr;
        int ans = 0;
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                if((arr[i].first == arrQ[j].first) && (arr[i].second == arrQ[j].second)) {
                    if(ansArr.size() > 0) {
                        for(int k = 0; k < ansArr.size();k++) {
                            if(arr[i].first != ansArr[k].first && arr[i].second != ansArr[k].second) {
                                ans++;
                                ansArr.push_back(make_pair(arr[i].first, arr[i].second));
                            }
                        }
                    }
                    else {
                        ansArr.push_back(make_pair(arr[i].first, arr[i].second));
                        ans++;
                    }
                    // cout<<arr[i].first <<" "<< arrQ[j].first<<" " << arr[i].second <<" "<< arrQ[j].second<<" " << j <<"\n";
                }
                
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}