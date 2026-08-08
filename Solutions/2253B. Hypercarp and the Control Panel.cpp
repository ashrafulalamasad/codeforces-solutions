#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> c, len;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            if(c.empty() || x != c.back()){
                c.push_back(x);
                len.push_back(1);
            }else{
                len.back()++;
            }
        }
        ll m = c.size(), ans = m;
        auto pref = [&](ll i, ll forbidden) -> ll {
            if(i == 0) return 0LL;
            if(c[i - 1] != forbidden) return i;
            return max(0LL, i - 1);
        };
        auto suff = [&](ll i, ll forbidden) -> ll {
            if(i == m - 1) return 0LL;
            ll rem = m - i - 1;
            if(c[i + 1] != forbidden) return rem;
            return max(0LL, rem - 1);
        };
        for(ll i = 0; i < m; i++){
            for(ll j = i + 1; j < m && j <= i + 2; j++){
                if(c[i] == c[j]) continue;
                for(ll alpha = 1; alpha <= 2; alpha++){
                    if(alpha > len[i]) continue;
                    for(ll beta = 1; beta <= 2; beta++){
                        if(beta > len[j]) continue;
                        ll firstForbidden;
                        if(alpha == 2){
                            firstForbidden = c[i];
                        }else{
                            firstForbidden = c[j];
                        }
                        ll lastForbidden;
                        if(beta == 2){
                            lastForbidden = c[j];
                        }else{
                            lastForbidden = c[i];
                        }
                        ll cur = pref(i, firstForbidden) + alpha + beta + suff(j, lastForbidden);
                        if(cur > ans) ans = cur;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
