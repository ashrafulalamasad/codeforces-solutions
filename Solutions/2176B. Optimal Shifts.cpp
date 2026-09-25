#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        s += s;
        ll cur = 0, res = 0;
        for(ll i = 0; i < 2 * n; i++){
            if(s[i] == '1') cur = 0;
            else cur++;
            res = max(res, cur);
        }
        cout << res << endl;
    }
    return 0;
}
