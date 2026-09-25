#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, l; cin >> n >> l;
        vector<pair<ll, ll>> v(n);
        for(ll i = 0; i < n; i++){
            ll a, b; cin >> a >> b;
            v[i] = {b, a};
        }
        sort(v.begin(), v.end());
        vector<ll> av(n);
        for(ll i = 0; i < n; i++) av[i] = v[i].second;
        sort(av.begin(), av.end());
        av.erase(unique(av.begin(), av.end()), av.end());
        ll m = av.size();
        vector<ll> sumF(m + 2, 0), cntF(m + 2, 0);
        auto gk = [&](ll B){
            if(B < 0) return 0LL;
            ll pos = 0, s = 0, bit = 1;
            while(bit * 2 <= m) bit *= 2;
            for(; bit; bit >>= 1){
                if(pos + bit <= m && s + sumF[pos + bit] <= B){
                    s += sumF[pos + bit];
                    pos += bit;
                }
            }
            ll k = 0;
            for(ll t = pos; t; t -= t & -t) k += cntF[t];
            if(pos < m){
                ll kp = 0;
                for(ll t = pos + 1; t; t -= t & -t) kp += cntF[t];
                ll cntNext = kp - k;
                ll val = av[pos];
                k += min(cntNext, (B - s) / val);
            }
            return k;
        };
        ll ans = 0;
        for(ll i = 0; i < n; i++){
            fill(sumF.begin(), sumF.end(), 0);
            fill(cntF.begin(), cntF.end(), 0);
            for(ll j = i; j < n; j++){
                ll idx = lower_bound(av.begin(), av.end(), v[j].second) - av.begin() + 1;
                for(ll t = idx; t <= m; t += t & -t){
                    sumF[t] += v[j].second;
                    cntF[t]++;
                }
                ans = max(ans, gk(l - (v[j].first - v[i].first)));
            }
        }
        cout << ans << endl;
    }
    return 0;
}
