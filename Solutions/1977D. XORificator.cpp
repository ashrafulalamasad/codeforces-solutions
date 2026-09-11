#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    tc{
        ll n, m; cin >> n >> m; vector<string> g(n);
        for(ll i = 0; i < n; i++) cin >> g[i];
        vector<ll> h(n), cx(m, 0);
        for(ll i = 0; i < n; i++) h[i] = rng();
        for(ll j = 0; j < m; j++){
            ll x = 0;
            for(ll i = 0; i < n; i++){
                if(g[i][j] == '1') x ^= h[i];
            }
            cx[j] = x;
        }
        vector<tuple<ll, ll, ll>> cands;
        cands.reserve(n * m);
        for(ll j = 0; j < m; j++){
            for(ll i = 0; i < n; i++){
                cands.push_back({cx[j] ^ h[i], j, i});
            }
        }
        sort(cands.begin(), cands.end());
        ll sz = cands.size();
        ll best = 0, bj = 0, bi = 0, i0 = 0;
        while(i0 < sz){
            ll i1 = i0;
            while(i1 < sz && get<0>(cands[i1]) == get<0>(cands[i0])) i1++;
            if(i1 - i0 > best){
                best = i1 - i0;
                bj = get<1>(cands[i0]);
                bi = get<2>(cands[i0]);
            }
            i0 = i1;
        }
        string res(n, '0');
        for(ll i = 0; i < n; i++){
            if(g[i][bj] == '1') res[i] = (i != bi) ? '1' : '0';
            else res[i] = (i == bi) ? '1' : '0';
        }
        cout << best << endl;
        cout << res << endl;
    }
    return 0;
}
