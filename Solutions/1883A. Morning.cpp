#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        ll cur = 1, ans = 0;
        for(ll i = 0; i < 4; i++){
            ll d = s[i] - '0';
            if(d == 0) d = 10;
            ans += abs(cur - d) + 1;
            cur = d;
        }
        cout << ans << endl;
    }
    return 0;
}
