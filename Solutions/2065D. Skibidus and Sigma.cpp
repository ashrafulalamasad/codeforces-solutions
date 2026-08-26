#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        vector<pair<ll, vector<ll>>> arrs(n);
        for(ll i = 0; i < n; i++){
            arrs[i].second.resize(m);
            ll s = 0;
            for(ll j = 0; j < m; j++){
                cin >> arrs[i].second[j];
                s += arrs[i].second[j];
            }
            arrs[i].first = s;
        }
        sort(arrs.rbegin(), arrs.rend());
        ll ans = 0;
        for(ll k = 0; k < n; k++){
            for(ll j = 0; j < m; j++){
                ll weight = n * m - k * m - j;
                ans += weight * arrs[k].second[j];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
