#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n), id(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        for(ll i = 0; i < n; i++) id[i] = i;
        sort(id.begin(), id.end(), [&](ll x, ll y){
            return a[x] + b[x] > a[y] + b[y];
        });
        ll ans = 0;
        for(ll i = 0; i < n; i++){
            ans = ans + a[i] - b[i];
        }
        for(ll i = 0; i < n; i++){
            ll j = id[i];
            if(i % 2 == 0){
                ans = ans + b[j] - 1;
            }else{
                ans = ans - a[j] + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
