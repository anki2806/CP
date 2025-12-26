#include<bits/stdc++.h>
using namespace std;
#define long long long

int main() {
    int n;
    cin>>n;

    long arr[n];

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    long ans = LONG_LONG_MAX;

    for(int i = 0; i < n; i++) {
        long curr = 0;
        long sum = 0;
        for(int j = i - 1; j >= 0; j--) {
            long count = 1;
            count = (curr / arr[j]) + 1;
            sum += count;
            curr = count * arr[j];
        }
        curr = 0;
        for(int j = i + 1; j < n; j++) {
            long count = 1;
            count = (curr / arr[j]) + 1;
            sum += count;
            curr = count * arr[j];
        }
        ans = min(ans, sum);
    }
    cout<<ans<<"\n";
}