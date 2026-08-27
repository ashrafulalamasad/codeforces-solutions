#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k; cin >> n >> m >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        unordered_map<ll,ll> cntb;
        for(ll i = 0; i < m; i++){
            ll x; cin >> x;
            cntb[x]++;
        }
        unordered_map<ll,ll> cnta; ll match = 0;
        for(ll i = 0; i < m; i++){
            ll v = a[i];
            if(cnta[v] < cntb[v]) match++;
            cnta[v]++;
        }
        ll ans = (match >= k) ? 1 : 0;
        for(ll l = 1; l + m - 1 < n; l++){
            ll out = a[l-1];
            if(cnta[out] <= cntb[out]) match--;
            cnta[out]--;
            ll in = a[l + m - 1];
            if(cnta[in] < cntb[in]) match++;
            cnta[in]++;
            if(match >= k) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
