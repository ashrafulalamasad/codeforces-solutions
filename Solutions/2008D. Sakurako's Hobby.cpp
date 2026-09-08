#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p(n + 1);
        for(ll i = 1; i <= n; i++) cin >> p[i];
        string s; cin >> s;
        vector<ll> ans(n + 1, 0); vector<bool> vis(n + 1, false);
        for(ll i = 1; i <= n; i++){
            if(vis[i]) continue;
            vector<ll> cyc;
            ll j = i;
            while(!vis[j]){
                vis[j] = true;
                cyc.push_back(j);
                j = p[j];
            }
            ll blacks = 0;
            for(ll x = 0; x < cyc.size(); x++){
                if(s[cyc[x] - 1] == '0') blacks++;
            }
            for(ll x = 0; x < cyc.size(); x++) ans[cyc[x]] = blacks;
        }
        for(ll i = 1; i <= n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
