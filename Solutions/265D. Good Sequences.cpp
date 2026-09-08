#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll LIM = 100001;

int main()
{
    fast;
    vector<ll> spf(LIM, 0);
    for(ll i = 2; i < LIM; i++){
        if(spf[i] == 0){
            for(ll j = i; j < LIM; j += i){
                if(spf[j] == 0) spf[j] = i;
            }
        }
    }
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    vector<ll> best(LIM, 0);
    ll ans = 1;
    for(ll i = 0; i < n; i++){
        ll x = a[i], cur = 1;
        vector<ll> ps;
        while(x > 1){
            ll p = spf[x];
            ps.push_back(p);
            while(x % p == 0) x /= p;
        }
        for(ll p : ps) cur = max(cur, best[p] + 1);
        for(ll p : ps) best[p] = cur;
        ans = max(ans, cur);
    }
    cout << ans << endl;
    return 0;
}
