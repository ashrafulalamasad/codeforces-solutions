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
        vector<vector<ll>> pos(n + 1);
        for(ll i = 0; i < n; i++) pos[a[i]].push_back(i);
        ll ans = n;
        for(ll v = 1; v <= n; v++){
            if(pos[v].empty()) continue;
            ll ops = 0;
            if(pos[v][0] > 0) ops++;
            if(pos[v].back() < n - 1) ops++;
            for(ll i = 1; i < (ll)pos[v].size(); i++){
                if(pos[v][i] - pos[v][i - 1] > 1) ops++;
            }
            ans = min(ans, ops);
        }
        cout << ans << endl;
    }
    return 0;
}
