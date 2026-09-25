#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<ll> r(n);
    for(ll i = 0; i < n; i++) cin >> r[i];
    ll neg = -4000000000000000000LL;
    vector<ll> d(m + 1, neg), add(m + 2, 0);
    d[0] = 0; ll cntP = 0;
    for(ll i = 0; i < n; i++){
        if(r[i] == 0){
            ll cur = 0;
            for(ll j = 0; j <= m; j++){
                cur += add[j];
                d[j] += cur;
                add[j] = 0;
            }
            add[m + 1] = 0;
            for(ll j = m; j >= 1; j--) d[j] = max(d[j], d[j - 1]);
            cntP++;
        }else if(r[i] > 0){
            if(r[i] <= m){
                add[r[i]]++;
                add[m + 1]--;
            }
        }else{
            ll rr = cntP + r[i];
            if(rr >= 0){
                add[0]++;
                add[rr + 1]--;
            }
        }
    }
    ll cur = 0;
    for(ll j = 0; j <= m; j++){
        cur += add[j];
        d[j] += cur;
    }
    ll ans = 0;
    for(ll j = 0; j <= m; j++) ans = max(ans, d[j]);
    cout << ans << endl;
    return 0;
}
