#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, L; cin >> n >> m >> L; vector<ll> l(n), r(n);
        for(ll i = 0; i < n; i++) cin >> l[i] >> r[i];
        vector<ll> x(m), v(m);
        for(ll i = 0; i < m; i++) cin >> x[i] >> v[i];
        priority_queue<ll> pq;
        ll k = 1, ans = 0, p = 0, bad = 0;
        for(ll i = 0; i < n; i++){
            while(p < m && x[p] < l[i]){
                pq.push(v[p]); p++;
            }
            ll need = r[i] - l[i] + 2;
            while(k < need && pq.empty() == 0){
                k = k + pq.top(); pq.pop(); ans++;
            }
            if(k < need){
                bad = 1; break;
            }
        }
        if(bad == 1){
            cout << -1 << endl;
        }else{
            cout << ans << endl;
        }
    }
    return 0;
}
