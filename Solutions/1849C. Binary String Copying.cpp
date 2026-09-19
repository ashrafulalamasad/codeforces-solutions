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
        string s; cin >> s;
        vector<ll> lf(n, -1);
        for(ll i = 0; i < n; i++){
            if(i > 0) lf[i] = lf[i - 1];
            if(s[i] == '0') lf[i] = i;
        }
        vector<ll> rg(n, n);
        for(ll i = n - 1; i >= 0; i--){
            if(i + 1 < n) rg[i] = rg[i + 1];
            if(s[i] == '1') rg[i] = i;
        }
        set<pair<ll, ll>> st;
        for(ll i = 0; i < m; i++){
            ll l, r; cin >> l >> r;
            l--;
            r--;
            ll ql = rg[l];
            ll qr = lf[r];
            if(ql > qr) st.insert({-1, -1});
            else st.insert({ql, qr});
        }
        cout << st.size() << endl;
    }
    return 0;
}
