    #include<iostream>
    #include<vector>

    using namespace std;

    int main() {
        int t;
        cin>>t;

        while(t--) {
            int n,m;
            cin>>n>>m;
            string x,s;
            cin>>x>>s;
            bool flag = false;
            for(int i = 0; i < m || x.size() < s.size(); i++) {
                int idx = x.find(s);
                if(idx != string::npos) {
                    cout << i << "\n";
                    flag = true;
                    break;
                }
                x = x + x;
            }
            if(!flag) {
                cout<<-1<<"\n";
            }
        }
        return 0;
    }