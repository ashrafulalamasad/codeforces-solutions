#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, ans = 0; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    vector<pair<ll, ll>> b, nb;
    for(ll i = 0; i < n; i++){
        ll x = a[i]; nb.clear();
        for(ll j = 0; j < (ll)b.size(); j++){
            ll ng = std::gcd(b[j].first, x);
            if(nb.empty() || nb.back().first != ng) nb.push_back({ng, b[j].second});
        }
        if(nb.empty() || nb.back().first != x) nb.push_back({x, i});
        bool bad = false;
        for(ll j = 0; j < (ll)nb.size(); j++){
            ll g = nb[j].first, l = nb[j].second, r = i;
            if(j + 1 < (ll)nb.size()) r = nb[j + 1].second - 1;
            ll need = i + 1 - g;
            if(l <= need && need <= r){
                bad = true; break;
            }
        }
        if(bad){
            ans++;
            b.clear();
        }else b = nb;
        cout << ans;
        if(i < n - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
