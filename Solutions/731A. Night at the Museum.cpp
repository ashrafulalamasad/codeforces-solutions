#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    ll ans = 0;
    char cur = 'a';
    for(char c : s){
        ll diff = abs(c - cur);
        ans += min(diff, 26 - diff);
        cur = c;
    }
    cout << ans << endl;
    return 0;
}
