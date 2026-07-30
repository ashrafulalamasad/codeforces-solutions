#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    char cur = 'a';
    ll ans = 0;
    for(char c : s){
        ll d = abs(c - cur);
        ans += min(d, 26 - d);
        cur = c;
    }
    cout << ans << endl;
    return 0;
}
