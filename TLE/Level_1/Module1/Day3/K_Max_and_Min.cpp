#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> arr(3);
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    sort(arr.begin(), arr.end());
    
    cout<<arr[0]<<" "<<arr[2]<<"\n";
}