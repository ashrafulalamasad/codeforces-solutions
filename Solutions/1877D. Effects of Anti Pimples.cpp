#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll mod = 998244353;
    ll n; cin >> n; vector<pair<ll, ll>> p(n);
    for(ll i = 0; i < n; i++){
        cin >> p[i].first;
        p[i].second = i + 1;
    }
    sort(p.rbegin(), p.rend());
    vector<ll> pw(n + 1, 1);
    for(ll i = 1; i <= n; i++) pw[i] = pw[i - 1] * 2 % mod;
    vector<bool> banned(n + 1, false);
    ll sz = 0, ans = 0;
    for(auto& it : p){
        ll idx = it.second, c = 0;
        for(ll d = 1; d * d <= idx; d++){
            if(idx % d == 0){
                if(!banned[d]){
                    banned[d] = true;
                    c++;
                }
                ll d2 = idx / d;
                if(d2 != d && !banned[d2]){
                    banned[d2] = true;
                    c++;
                }
            }
        }
        if(c > 0){
            ans = (ans + it.first % mod * ((pw[n - sz] - pw[n - sz - c] + mod) % mod)) % mod;
        }
        sz += c;
    }
    cout << ans << endl;
    return 0;
}
