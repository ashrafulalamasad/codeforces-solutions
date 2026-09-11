#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> cur(n);
        vector<ll> start(n + m + 5, -1), cnt(n + m + 5, 0);
        for(ll i = 0; i < n; i++){
            cin >> cur[i];
            start[cur[i]] = 0;
        }
        for(ll i = 1; i <= m; i++){
            ll p, v; cin >> p >> v;
            p--;
            ll old = cur[p];
            cnt[old] += i - start[old];
            start[old] = -1;
            cur[p] = v;
            start[v] = i;
        }
        for(ll i = 0; i < n; i++){
            ll v = cur[i];
            cnt[v] += m + 1 - start[v];
        }
        ll ans = (m + 1) * m / 2 * 2 * n;
        for(ll v = 1; v <= n + m; v++){
            if(cnt[v] > 1){
                ans -= cnt[v] * (cnt[v] - 1) / 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
