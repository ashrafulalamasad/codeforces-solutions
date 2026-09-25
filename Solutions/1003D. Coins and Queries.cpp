#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, q; cin >> n >> q;
    vector<ll> cnt(31, 0);
    for(ll i = 0; i < n; i++){
        ll a; cin >> a;
        cnt[__builtin_ctzll(a)]++;
    }
    while(q--){
        ll b; cin >> b;
        ll ans = 0;
        for(ll d = 30; d >= 0; d--){
            ll take = min(cnt[d], b >> d);
            b -= take << d;
            ans += take;
        }
        if(b) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}
