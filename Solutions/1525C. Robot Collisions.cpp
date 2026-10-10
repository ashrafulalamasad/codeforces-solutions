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
        vector<ll> x(n), ans(n, -1);
        for(ll i = 0; i < n; i++) cin >> x[i];
        vector<char> dir(n);
        for(ll i = 0; i < n; i++) cin >> dir[i];
        vector<pair<ll, ll>> v(n);
        for(ll i = 0; i < n; i++) v[i] = {x[i], i};
        sort(v.begin(), v.end());
        vector<vector<ll>> st(2);
        for(ll k = 0; k < n; k++){
            ll pos = v[k].first;
            ll idx = v[k].second;
            ll p = pos % 2;
            if(dir[idx] == 'R' || (dir[idx] == 'L' && st[p].empty())) st[p].push_back(idx);
            if(dir[idx] == 'L' && !st[p].empty() && st[p].back() != idx){
                ll j = st[p].back();
                st[p].pop_back();
                if(dir[j] == 'R') ans[idx] = (pos - x[j]) / 2; else ans[idx] = (pos + x[j]) / 2;
                ans[j] = ans[idx];
            }
        }
        for(ll p = 0; p < 2; p++){
            while(st[p].size() > 1){
                ll i = st[p].back();
                st[p].pop_back();
                ll j = st[p].back();
                st[p].pop_back();
                ll y = x[j];
                if(dir[j] == 'L') y = -x[j];
                ll t = (2 * m - x[i] - y) / 2;
                ans[i] = t;
                ans[j] = t;
            }
        }
        for(ll i = 0; i < n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
