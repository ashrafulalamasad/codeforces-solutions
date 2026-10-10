#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<vector<ll>> b(n, vector<ll>(m));
        for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) cin >> b[i][j];
        for(ll i = 0; i < n; i++) sort(b[i].begin(), b[i].end());
        vector<vector<ll>> ans(n, vector<ll>(m, 0)); vector<ll> ptr(n, 0);
        for(ll j = 0; j < m; j++){
            ll best = -1;
            for(ll i = 0; i < n; i++) if(ptr[i] < m && (best == -1 || b[i][ptr[i]] < b[best][ptr[best]])) best = i;
            ans[best][j] = b[best][ptr[best]];
            ptr[best]++;
        }
        for(ll i = 0; i < n; i++){
            vector<ll> cols;
            for(ll j = 0; j < m; j++) if(ans[i][j] == 0) cols.push_back(j);
            for(ll j = ptr[i]; j < m; j++) ans[i][cols[j - ptr[i]]] = b[i][j];
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++) cout << ans[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}
