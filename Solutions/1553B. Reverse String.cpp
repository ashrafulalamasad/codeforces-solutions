#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s, t; cin >> s >> t;
        ll n = (ll)s.size(), m = (ll)t.size();
        bool ok = false;
        for(ll p = 0; p < n; p++){
            if(s[p] != t[0]) continue;
            for(ll k = 0; k + p < n && k < m; k++){
                if(s[p + k] != t[k]) break;
                ll left = m - 1 - k;
                if(p + k - left < 0) continue;
                bool good = true;
                for(ll j = 1; j <= left; j++){
                    if(s[p + k - j] != t[k + j]) good = false;
                }
                if(good) ok = true;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
