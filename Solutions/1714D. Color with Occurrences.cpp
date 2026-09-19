#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string t; ll n; cin >> t >> n; vector<string> s(n);
        for(ll i = 0; i < n; i++) cin >> s[i];
        ll m = (ll)t.size();
        vector<ll> bl(m + 1, 1000000000), pr(m + 1, -1);
        vector<ll> wi(m + 1, -1), st(m + 1, -1); bl[0] = 0;
        for(ll pos = 0; pos < m; pos++){
            if(bl[pos] == 1000000000) continue;
            for(ll i = 0; i < n; i++){
                ll len = (ll)s[i].size();
                for(ll l = 0; l <= pos; l++){
                    if(l + len > m) continue;
                    if(l > pos) continue;
                    if(pos > l + len - 1) continue;
                    bool ok = true;
                    for(ll k = 0; k < len; k++) if(t[l + k] != s[i][k]) ok = false;
                    if(ok == false) continue;
                    ll np = l + len;
                    if(bl[np] > bl[pos] + 1){
                        bl[np] = bl[pos] + 1;
                        pr[np] = pos;
                        wi[np] = i;
                        st[np] = l;
                    }
                }
            }
        }
        if(bl[m] == 1000000000) cout << -1 << endl;
        else{
            cout << bl[m] << endl;
            ll cur = m;
            while(cur > 0){
                cout << wi[cur] + 1 << " " << st[cur] + 1 << endl;
                cur = pr[cur];
            }
        }
    }
    return 0;
}
