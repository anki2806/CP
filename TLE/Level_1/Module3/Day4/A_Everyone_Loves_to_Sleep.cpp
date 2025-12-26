#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    // while(t--) {
    //     int n;
    //     cin>>n;

    //     int h,m;
    //     cin>>h>>m;

    //     int arr[n][2];

    //     for(int i = 0; i < n; i++) {
    //         cin>>arr[i][0]>>arr[i][1];
    //     }

    //     int ansH = 0, ansM = 0;
    //     bool flag = true;
    //     int minH = 24, minM = 60;
    //     for(int i = 0; i < n; i++) {
    //         if(arr[i][0] == h) {
    //             if(arr[i][1] == m) {
    //                 ansH = 0, ansM = 0;
    //             }
    //             else if(arr[i][1] > m) {
    //                 ansH = 0;
    //                 ansM = arr[i][1] - m;
    //             }
    //             else {
    //                 arr[i][0] += 23;
    //                 ansM = arr[i][1] - m + 60;
    //                 ansH = arr[i][0] - h;
    //             }
    //         }
    //         else if(arr[i][0] > h) {
    //             if(arr[i][1] >= m) {
    //                 ansM = arr[i][1] - m;
    //                 ansH = arr[i][0] - h;
    //             }
    //             else {
    //                 ansM = arr[i][1] - m + 60;
    //                 ansH = arr[i][0] - 1 - h;
    //             }
    //         }
    //         else {
    //             arr[i][0] += 24;
    //             if(arr[i][1] >= m) {
    //                 ansM = arr[i][1] - m;
    //                 ansH = arr[i][0] - h;
    //             }
    //             else {
    //                 ansM = arr[i][1] - m + 60;
    //                 ansH = arr[i][0] - 1 - h;
    //             }
    //         }
    //         int minAns = (ansH * 60) + ansM;
    //         if(minAns < (minH * 60) + minM) {
    //             minH = ansH;
    //             minM = ansM;
    //         } 
    //     }

    //     cout<<minH<<" "<<minM<<"\n";

    // }


    while(t--) {
        int n, h, m;
        cin>>n>>h>>m;

        int arr[n][2];

        for(int i = 0; i < n; i++) {
            cin>>arr[i][0];
            cin>>arr[i][1];

            if(arr[i][0] < h || (arr[i][0] == h && arr[i][1] < m)) {
                arr[i][0] += 24;
            }
        }

        int diff = 1000000;

        for(int i = 0; i < n; i++) {
            int minutes = arr[i][0] * 60 + arr[i][1];
            diff = min(minutes - (h * 60 + m), diff);
        }

        cout<<diff / 60 <<" "<<diff % 60<<"\n";

        
    }
}