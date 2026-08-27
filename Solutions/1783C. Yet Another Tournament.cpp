#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> a(n + 1);
        ll ans; vector<pair<ll, ll>> v(n);
        for(ll i = 1; i <= n; i++){
            cin >> a[i];
            v[i - 1] = {a[i], i};
        }
        sort(v.begin(), v.end());
        vector<ll> pref(n + 1, 0), rnk(n + 1, 0);
        for(ll i = 0; i < n; i++){
            pref[i + 1] = pref[i] + v[i].first;
            rnk[v[i].second] = i;
        }
        ll k = upper_bound(pref.begin(), pref.end(), m) - pref.begin() - 1;
        if(k == n){
            ans = 1;
        }else if(k == 0){
            ans = n + 1;
        }else{
            ll pos = k + 1, need;
            if(rnk[pos] < k){
                need = pref[k];
            }else{
                need = pref[k - 1] + a[pos];
            }
            if(need <= m){
                ans = n - k;
            }else{
                ans = n - k + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
