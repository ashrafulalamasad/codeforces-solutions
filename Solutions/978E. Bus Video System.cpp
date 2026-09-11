#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n, w; cin >> n >> w;
    ll s = 0, mn = 0, mx = 0;
    for(ll i = 0; i < n; i++){
        ll a; cin >> a;
        s += a;
        mn = min(mn, s);
        mx = max(mx, s);
    }
    ll ans = max(0LL, w - mx + mn + 1);
    cout << ans << endl;
    return 0;
}
