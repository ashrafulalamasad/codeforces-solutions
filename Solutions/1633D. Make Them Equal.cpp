#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    vector<ll> dist(1001, 1000000);
    dist[1] = 0; queue<ll> q; q.push(1);
    while(q.empty() == 0){
        ll cur = q.front(); q.pop();
        for(ll x = 1; x <= cur; x++){
            ll nxt = cur + cur / x;
            if(nxt <= 1000 && dist[nxt] > dist[cur] + 1){
                dist[nxt] = dist[cur] + 1;
                q.push(nxt);
            }
        }
    }
    tc{
        ll n, k; cin >> n >> k; vector<ll> b(n), c(n);
        for(ll i = 0; i < n; i++) cin >> b[i];
        for(ll i = 0; i < n; i++) cin >> c[i];
        ll free = 0; vector<ll> w, v;
        for(ll i = 0; i < n; i++){
            if(b[i] == 1){
                free = free + c[i];
            }else{
                w.push_back(dist[b[i]]);
                v.push_back(c[i]);
            }
        }
        ll cap = min(k, (ll)w.size() * 12);
        vector<ll> dp(cap + 1, 0);
        for(ll i = 0; i < w.size(); i++){
            if(w[i] > cap){
                continue;
            }
            for(ll j = cap; j >= w[i]; j--){
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
            }
        }
        cout << free + dp[cap] << endl;
    }
    return 0;
}
