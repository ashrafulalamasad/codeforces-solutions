#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string a, b; cin >> a >> b;
        ll n = (ll)a.size(), m = (ll)b.size();
        vector<ll> Pa(n+1, 0), Pb(m+1, 0);
        for(ll i = 1; i <= n; i++) Pa[i] = (Pa[i-1] + (a[i-1] - '0'))%10;
        for(ll j = 1; j <= m; j++) Pb[j] = (Pb[j-1] + (b[j-1] - '0'))%10;
        ll size = m + 2;
        vector<vector<ll>> fen(10, vector<ll>(size, -1));
        auto update = [&](ll d, ll pos, ll val){
            for(ll idx = pos; idx < size; idx += idx & (-idx)){
                if(fen[d][idx] < val) fen[d][idx] = val;
            }
        };
        auto query = [&](ll d, ll pos)->ll{
            ll res = -1;
            for(ll idx = pos; idx > 0; idx -= idx & (-idx)){
                if(fen[d][idx] > res) res = fen[d][idx];
            }
            return res;
        };
        vector<ll> dpCur(m+1, -1);
        dpCur[0] = 0;
        for(ll j = 1; j <= m; j++) dpCur[j] = -1;
        for(ll j = 0; j <= m; j++){
            if(dpCur[j] != -1){
                ll d = ((Pa[0] - Pb[j])%10 + 10)%10;
                update(d, j + 1, dpCur[j]);
            }
        }
        for(ll i = 1; i <= n; i++){
            dpCur[0] = -1;
            for(ll j = 1; j <= m; j++){
                ll d = ((Pa[i] - Pb[j])%10 + 10)%10;
                ll q = query(d, j);
                dpCur[j] = (q == -1) ? -1 : q + 1;
            }
            for(ll j = 0; j <= m; j++){
                if(dpCur[j] != -1){
                    ll d = ((Pa[i] - Pb[j])%10 + 10)%10;
                    update(d, j + 1, dpCur[j]);
                }
            }
        }
        cout << dpCur[m] << endl;
    }
    return 0;
}
