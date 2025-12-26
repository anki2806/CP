#include <bitset>
#include<iostream>

using namespace std;

string DecimalToBinary(int n) {
    string ans = "";

    while(n > 0) {
        ans += to_string(n % 2);
        n = n / 2;
    }
    return ans;
}

bool isPalindrome(string s) {
    int n = 0;

    while(n < s.size()) {
        if(s[n] == '0') {
            n++;
        }
        else {
            break;
        }
    }
    int left = n, right = s.size() - 1;

    while(left < right) {
        if(s[left] != s[right]) {
            return false;
            break;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        long long n;
        cin>>n;
        int count = __builtin_popcount(n);
        string s = DecimalToBinary(n);

        if(count % 2 == 0 && isPalindrome(s)) {
            cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }
    }
}