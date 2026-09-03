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
        vector<ll> vals(a); sort(vals.begin(), vals.end());
        vals.erase(unique(vals.begin(), vals.end()), vals.end());
        ll cnt = vals.size(); vector<ll> id(n);
        for(ll i = 0; i < n; i++) id[i] = lower_bound(vals.begin(), vals.end(), a[i]) - vals.begin();
        ll m; cin >> m;
        vector<ll> n2c(cnt, 0), c2n(26, -1);
        while(m--){
            string s; cin >> s;
            if((ll)s.size() != n){
                cout << "NO" << endl;
                continue;
            }
            fill(n2c.begin(), n2c.end(), 0);
            fill(c2n.begin(), c2n.end(), -1);
            bool ok = true;
            for(ll i = 0; i < n && ok; i++){
                ll c = s[i] - 'a';
                if(n2c[id[i]] != 0 && n2c[id[i]] != s[i]) ok = false;
                if(c2n[c] != -1 && c2n[c] != id[i]) ok = false;
                n2c[id[i]] = s[i];
                c2n[c] = id[i];
            }
            if(ok){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
