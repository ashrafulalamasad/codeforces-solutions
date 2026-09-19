#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> u(n), ans(n + 1, 0);
        for(ll i = 0; i < n; i++) cin >> u[i];
        map<ll, vector<ll>> g;
        for(ll i = 0; i < n; i++){
            ll s; cin >> s;
            g[u[i]].push_back(s);
        }
        for(auto &p : g){
            vector<ll> &v = p.second;
            sort(v.rbegin(), v.rend());
            ll m = v.size();
            for(ll i = 1; i < m; i++) v[i] += v[i - 1];
            for(ll k = 1; k <= m; k++){
                ll teams = m / k;
                if(teams > 0) ans[k] += v[teams * k - 1];
            }
        }
        for(ll k = 1; k <= n; k++){
            if(k > 1) cout << " ";
            cout << ans[k];
        }
        cout << endl;
    }
    return 0;
}
