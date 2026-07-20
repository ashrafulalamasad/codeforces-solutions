#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    vector<vector<ll>> shelves(n);
    for(ll i=0; i<n; i++){
        ll sz; cin >> sz;
        shelves[i].resize(sz);
        for(ll j=0; j<sz; j++) cin >> shelves[i][j];
    }
    const ll NEG = (ll)-1000000000000000000LL;
    vector<ll> dp(m+1, NEG);
    dp[0] = 0;
    for(ll i=0; i<n; i++){
        ll sz = (ll)shelves[i].size();
        ll limit = min(sz, m);
        vector<ll> pref(sz+1, 0), suff(sz+1, 0);
        for(ll j=0; j<sz; j++) pref[j+1] = pref[j] + shelves[i][j];
        for(ll k=1; k<=sz; k++) suff[k] = suff[k-1] + shelves[i][sz-k];
        vector<ll> best(limit+1, 0);
        for(ll k=0; k<=limit; k++){
            ll cur = 0;
            for(ll l=0; l<=k; l++){
                cur = max(cur, pref[l] + suff[k-l]);
            }
            best[k] = cur;
        }
        vector<ll> ndp(m+1, NEG);
        for(ll taken=0; taken<=m; taken++){
            if(dp[taken] == NEG) continue;
            for(ll k=0; k<=limit && taken + k <= m; k++){
                ndp[taken + k] = max(ndp[taken + k], dp[taken] + best[k]);
            }
        }
        dp.swap(ndp);
    }
    cout << dp[m] << endl;
    return 0;
}
