#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n; cin >> n;
        map<ll, ll> mx, my, msum, mdif;
        for(ll i = 0; i < n; ++i){
            ll x, y; cin >> x >> y;
            ++mx[x];
            ++my[y];
            ++msum[x + y];
            ++mdif[x - y];
        }
        ll ans = 0;
        for(auto &[k, v] : mx) ans += v * (v - 1);
        for(auto &[k, v] : my) ans += v * (v - 1);
        for(auto &[k, v] : msum) ans += v * (v - 1);
        for(auto &[k, v] : mdif) ans += v * (v - 1);
        cout << ans << endl;
    }
    return 0;
}
