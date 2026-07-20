#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, k; cin >> n >> m >> k;
    ll x, s; cin >> x >> s;
    vector<ll> a(m), b(m);
    for(ll i = 0; i < m; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];
    vector<ll> c(k), d(k);
    for(ll i = 0; i < k; i++) cin >> c[i];
    for(ll i = 0; i < k; i++) cin >> d[i];
    ll ans = n * x;
    for(ll i = 0; i < m; i++){
        if(b[i] <= s){
            ll remaining = s - b[i];
            ll rem_potions = n;
            auto it = upper_bound(d.begin(), d.end(), remaining) - d.begin();
            ll idx = it - 1;
            if(idx >= 0){
                rem_potions = max(0LL, n - c[idx]);
            }
            ans = min(ans, rem_potions * a[i]);
        }
    }
    auto it2 = upper_bound(d.begin(), d.end(), s) - d.begin();
    ll idx2 = it2 - 1;
    if(idx2 >= 0){
        ans = min(ans, max(0LL, n - c[idx2]) * x);
    }
    cout << ans << endl;
    return 0;
}
