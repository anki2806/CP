#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n; 
    cin>>n;
    int arr[n];
    vector<int> ans;
    
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    ans.push_back(arr[0]);
    int i = 1;
    int val = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i-1]) {
            while(arr[i] != arr[i - 1]) {
                ans.push_back(++arr[i - 1]);
            }
        }
        else {
            while(arr[i] != arr[i - 1]) {
                ans.push_back(--arr[i - 1]);
            }
        }
    }

    for(int ele : ans) {
        cout<<ele<<" ";
    }
    cout<<"\n";
}