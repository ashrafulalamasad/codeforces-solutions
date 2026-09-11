#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, pb, ps; cin >> n >> k >> pb >> ps;
        vector<ll> p(n + 1), a(n + 1);
        for(ll i = 1; i <= n; i++) cin >> p[i];
        for(ll i = 1; i <= n; i++) cin >> a[i];
        auto best = [&](ll start) -> ll {
            ll total = 0, mx = 0, pos = start;
            for(ll t = 0; t < min(k, n); t++){
                mx = max(mx, total + (k - t) * a[pos]);
                total += a[pos];
                pos = p[pos];
            }
            return mx;
        };
        ll sb = best(pb), ss = best(ps);
        if(sb > ss) cout << "Bodya" << endl;
        else if(ss > sb) cout << "Sasha" << endl;
        else cout << "Draw" << endl;
    }
    return 0;
}
