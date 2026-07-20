#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<vector<ll>> pos(n+1);
        for(ll i = 0; i < n; i++) pos[a[i]].push_back(i);
        vector<ll> usable;
        for(ll val=1; val<=n; val++){
            ll take = min((ll)pos[val].size(), k);
            for(ll j = 0; j < take; j++) usable.push_back(pos[val][j]);
        }
        ll total = (ll)usable.size();
        ll full = (total / k) * k;
        vector<ll> ans(n,0);
        for(ll i = 0; i < full; i++) ans[usable[i]] = (i % k) + 1;
        for(ll i = 0; i < n; i++){
            if(i) cout << ' ';
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
