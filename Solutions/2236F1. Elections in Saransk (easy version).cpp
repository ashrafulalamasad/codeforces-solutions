#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll MAXV = 500000; vector<ll> spf(MAXV + 1, 0);
    for(ll i = 2; i <= MAXV; i++){
        if(spf[i] == 0){
            spf[i] = i;
            if(i * i <= MAXV){
                for(ll j = i * i; j <= MAXV; j = j + i){
                    if(spf[j] == 0) spf[j] = i;
                }
            }
        }
    }
    spf[1] = 1; ll MOD = 1000000007;
    tc{
        ll n, x; cin >> n >> x; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        map<ll, ll> cnt;
        for(ll i = 0; i < n; i++){
            ll v = a[i];
            while(v > 1){
                ll p = spf[v], c = 0;
                while(v % p == 0){
                    v = v / p;
                    c++;
                }
                cnt[p] = cnt[p] + c;
            }
        }
        ll ans = 1;
        for(auto it = cnt.begin(); it != cnt.end(); it++){
            ans = ans * (it->second + 1) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}
