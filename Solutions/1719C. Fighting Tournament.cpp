#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q;
        vector<ll> a(n + 1); deque<ll> dq;
        for(ll i = 1; i <= n; i++){
            cin >> a[i];
            dq.push_back(i);
        }
        vector<vector<ll>> wins(n + 1);
        for(ll r = 1; r <= n; r++){
            ll u = dq.front(); dq.pop_front();
            ll v = dq.front(); dq.pop_front();
            if(a[u] < a[v]) swap(u, v);
            wins[u].push_back(r);
            dq.push_front(u);
            dq.push_back(v);
        }
        for(ll i = 0; i < q; i++){
            ll idx, k; cin >> idx >> k;
            ll ans = upper_bound(wins[idx].begin(), wins[idx].end(), k) - wins[idx].begin();
            if(a[idx] == n && k > n) ans += k - n;
            cout << ans << endl;
        }
    }
    return 0;
}
