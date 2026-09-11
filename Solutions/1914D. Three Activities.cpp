#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n), c(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        for(ll i = 0; i < n; i++) cin >> c[i];
        vector<ll> ia(n), ib(n), ic(n);
        for(ll i = 0; i < n; i++){
            ia[i] = i; ib[i] = i; ic[i] = i;
        }
        sort(ia.begin(), ia.end(), [&](ll x, ll y){
            return a[x] > a[y];
        });
        sort(ib.begin(), ib.end(), [&](ll x, ll y){
            return b[x] > b[y];
        });
        sort(ic.begin(), ic.end(), [&](ll x, ll y){
            return c[x] > c[y];
        });
        ll ans = 0;
        for(ll i = 0; i < 3 && i < n; i++){
            for(ll j = 0; j < 3 && j < n; j++){
                for(ll k = 0; k < 3 && k < n; k++){
                    ll x = ia[i], y = ib[j], z = ic[k];
                    if(x != y && y != z && x != z){
                        ans = max(ans, a[x] + b[y] + c[z]);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
