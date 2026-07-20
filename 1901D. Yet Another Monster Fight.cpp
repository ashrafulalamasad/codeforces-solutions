#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n; cin >> n; vector<ll> a(n + 1);
    for(ll i = 1; i <= n; ++i) cin >> a[i];
    vector<ll> pref(n + 2, 0), suff(n + 2, 0);
    for(ll i = 1; i <= n; ++i) pref[i] = max(pref[i - 1], a[i] + n - i);
    for(ll i = n; i >= 1; --i) suff[i] = max(suff[i + 1], a[i] + i - 1);
    ll ans = 1e18;
    for(ll i = 1; i <= n; ++i){
        ll cur = max({a[i], pref[i - 1], suff[i + 1]});
        ans = min(ans, cur);
    }
    cout << ans << endl;
    return 0;
}
