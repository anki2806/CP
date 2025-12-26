#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
  unordered_map<int,int> map;
  for(int i = 0; i < 5; i++) {
    int a;
    cin>>a;
    if(map.find(a) != map.end()) {
        map[a] = map[a] + 1;
    }
    else {
        map.insert({a, 1});
    }
  }
  bool flag = false;
  if(map.size() == 2) {
    for(auto & pair: map) {
        if(pair.second == 2) {
            cout<<"Yes\n";
            flag = true;
            break;
        }
    }
    if(!flag) {
        cout<<"No\n";
    }
  }
  else {
    cout<<"No\n";
  }
}