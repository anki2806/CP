#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!getline(cin, s)) return 0;

    bool first = true;
    for (unsigned char c : s) {
        if (!first) cout << ' ';
        cout << int(c);
        first = false;
    }
    cout << '\n';
    return 0;
}

