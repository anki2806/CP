#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define ANKIT ios_base::sync_with_stdio(false); cin.tie(NULL);
bool isPossible(ll mid, ll money, ll countB, ll countS, ll countC, ll b, ll s, ll c, ll pb, ll ps, ll pc) {
    countB *= mid;
    countS *= mid;
    countC *= mid;

    ll extraB = countB - b, extraS = countS - s, extraC = countC - c;
    
    if(extraB > 0) {
        money -= (extraB * pb);
    }
    if(extraS > 0) {
        money -= (extraS * ps);
    }
    if(extraC > 0) {
        money -= (extraC * pc);
    }
    // cout<<mid<<" "<<money<<" ";
    if(money >= 0) {
        return true;
    }
    return false;
}
void solve() {
    string str;
    cin>>str;

    ll b, s, c;
    cin>>b>>s>>c;

    ll pb, ps, pc;
    cin>>pb>>ps>>pc;
    
    ll money;
    cin>>money;

    ll countB = 0, countS = 0, countC = 0;

    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'B') {
            countB++;
        }
        else if(str[i] == 'S') {
            countS++;
        }
        else {
            countC++;
        }
    }

    ll cost = 0;
    cost += (countB * pb) + (countS * ps) + (countC * pc);

    if(countB > 0) {
        money += pb * b;
    }

    if(countS > 0) {
        money += ps * s;
    }

    if(countC > 0) {
        money += pc * c;
    }

    ll left = 0;
    ll right = money / cost;

    if(countB > 0) {
        money -= pb * b;
    }

    if(countS > 0) {
        money -= ps * s;
    }

    if(countC > 0) {
        money -= pc * c;
    }

    ll mid = left + (right - left) / 2;
    ll ans = left;
    // cout<<left<<" "<<right<<" "<<money<<" ";
    while(left <= right) {
        // cout<<left<<" "<<right<<" "<<money<<" ";
        if(isPossible(mid, money, countB, countS, countC, b, s, c, pb, ps, pc)) {
            left = mid + 1;
            ans = mid;
        }
        else {
            right = mid - 1;
        }
        mid = left + (right - left) / 2;
    }
    
    cout<<ans<<"\n";
}

int main() {
    ANKIT

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}