#include<bits/stdc++.h>
using namespace std;
int ans = 0, m;
vector<int> edges[10000005];
int arr[10000005];
void dfs(int ind, int currCat, int parent) {

    if(arr[ind] == 1) {
        currCat++;
    }
    else {
        currCat = 0;
    }

    if(currCat > m) {
        return;
    }

    bool isLeaf = true;
    for(int i = 0; i < edges[ind].size(); i++) {
        if(edges[ind][i] != parent) {
            isLeaf = false;
            dfs(edges[ind][i], currCat, ind);
        }
    }

    if(isLeaf) {
        ans++;
    }
}

int main() {
    int n, b;
    cin>>n>>b;

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin>>u>>v;
        edges[u - 1].push_back(v - 1);
        edges[v - 1].push_back(u - 1);
    }

    m = b;
    dfs(0, 0, -1);
    cout<<ans<<"\n"; 

}