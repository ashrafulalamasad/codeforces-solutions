#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, p; cin >> n >> p; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        vector<pair<ll, ll>> v(n);
        for(ll i = 0; i < n; i++) v[i] = {b[i], a[i]};
        sort(v.begin(), v.end());
        priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
        pq.push({p, (ll)1e18}); ll cost = 0;
        for(ll i = 0; i < n; i++){
            auto [bc, ac] = pq.top(); pq.pop();
            cost += bc; ac--;
            if(ac > 0) pq.push({bc, ac});
            pq.push(v[i]);
        }
        cout << cost << endl;
    }
    return 0;
}
