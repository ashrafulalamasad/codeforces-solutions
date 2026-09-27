#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; map<ll, ll> m;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            for(ll j = 0; j < 20; j++){
                ll s = 0;
                while(x > 0){
                    ll d = x % 10;
                    s = s + d * d;
                    x = x / 10;
                }
                x = s;
            }
            m[x]++;
        }
        ll ans = 0;
        for(auto p : m) ans = ans + p.second * (p.second - 1) / 2;
        cout << ans << endl;
    }
    return 0;
}
