#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<vector<ll>> g(n);
        for(ll i = 1; i < n; i++){
            ll p; cin >> p; p--;
            g[p].push_back(i);
        }
        ll lo = a[0], hi = 2000000000000LL;
        while(lo < hi){
            ll mid = (lo + hi + 1) / 2, need = 0;
            if(mid > a[0]) need = mid - a[0];
            bool ok = true; vector<pair<ll, ll>> st;
            for(ll i = 0; i < (ll)g[0].size(); i++) st.push_back({g[0][i], need});
            while(ok && st.size() > 0){
                ll v = st.back().first;
                ll dec = st.back().second;
                st.pop_back();
                if(g[v].size() == 0){
                    if(dec > a[v]) ok = false;
                }else{
                    ll op = 0;
                    if(dec > a[v]) op = dec - a[v];
                    ll dec2 = dec + op;
                    if(dec2 > 1000000000LL) ok = false;
                    else for(ll i = 0; i < (ll)g[v].size(); i++) st.push_back({g[v][i], dec2});
                }
            }
            if(ok) lo = mid;
            else hi = mid - 1;
        }
        cout << lo << endl;
    }
    return 0;
}
