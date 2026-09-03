#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> x(n), r(n);
        for(ll i = 0; i < n; i++) cin >> x[i];
        for(ll i = 0; i < n; i++) cin >> r[i];
        vector<pair<ll, ll>> pts;
        for(ll i = 0; i < n; i++){
            for(ll dx = -r[i]; dx <= r[i]; dx++){
                ll v = r[i] * r[i] - dx * dx;
                ll s = sqrtl((long double)v);
                while(s * s > v) s--;
                while((s + 1) * (s + 1) <= v) s++;
                pts.push_back({x[i] + dx, s});
            }
        }
        sort(pts.begin(), pts.end());
        ll ans = 0, j = 0;
        while(j < (ll)pts.size()){
            ll X = pts[j].first, s = pts[j].second;
            while(j < (ll)pts.size() && pts[j].first == X){
                s = max(s, pts[j].second);
                j++;
            }
            ans += 2 * s + 1;
        }
        cout << ans << endl;
    }
    return 0;
}
