#include<iostream>
using namespace std;

int main() {
    string s;
    cin>>s;

    int Up = 0, Low = 0;

    for(int i = 0; i < s.size(); i++) {
        if((int)s[i] <= 90){
            Up++;
        }
        else {
            Low++;
        }
    }
    if(Up > Low) {
        for(int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
    }
    else {
        for(int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
    }
    cout<<s<<"\n";
}