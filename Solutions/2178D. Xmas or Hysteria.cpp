#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> a(n), idx(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) idx[i] = i;
        sort(idx.begin(), idx.end(), [&](ll x, ll y){ return a[x] < a[y]; });
        if(m == 0){
            ll sum = 0;
            for(ll i = 0; i < n; i++) sum = sum + a[i];
            ll mx = a[idx[n - 1]];
            if(sum - mx < mx) cout << -1 << endl;
            else{
                ll tot = sum - mx;
                ll mxo = a[idx[n - 2]];
                ll w = 0, j = 0;
                while(w <= tot - mx - mxo){
                    w = w + a[idx[j]];
                    j++;
                }
                vector<pair<ll, ll>> ans;
                for(ll i = 0; i < j; i++) ans.push_back({idx[i], idx[i + 1]});
                for(ll i = j; i < n - 1; i++) ans.push_back({idx[i], idx[n - 1]});
                ll k = ans.size();
                cout << k << endl;
                for(ll i = 0; i < k; i++) cout << ans[i].first + 1 << " " << ans[i].second + 1 << endl;
            }
        }else{
            if(m > n / 2) cout << -1 << endl;
            else{
                ll g = n - 2 * m + 2;
                vector<pair<ll, ll>> ans;
                for(ll i = 0; i < g - 2; i++) ans.push_back({idx[i], idx[i + 1]});
                ans.push_back({idx[g - 1], idx[g - 2]});
                ll p = g;
                for(ll i = 0; i < m - 1; i++){
                    ans.push_back({idx[p + 1], idx[p]});
                    p = p + 2;
                }
                ll k = ans.size();
                cout << k << endl;
                for(ll i = 0; i < k; i++) cout << ans[i].first + 1 << " " << ans[i].second + 1 << endl;
            }
        }
    }
    return 0;
}
