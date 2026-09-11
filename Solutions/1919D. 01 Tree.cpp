#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n + 2, -2), prv(n + 2, 0);
        vector<ll> nxt(n + 2, 0), in(n + 2, 0);
        for(ll i = 1; i <= n; i++){
            cin >> a[i]; prv[i] = i - 1; nxt[i] = i + 1;
        }
        auto good = [&](ll i)->ll {
            if(i < 1 || i > n) return 0;
            if(a[prv[i]] == a[i] - 1 || a[nxt[i]] == a[i] - 1){
                return 1;
            }
            return 0;
        };
        priority_queue<pair<ll, ll>> pq;
        for(ll i = 1; i <= n; i++){
            if(good(i) == 1){
                in[i] = 1;
                pq.push({a[i], i});
            }
        }
        while(pq.empty() == 0){
            ll i = pq.top().second; pq.pop();
            nxt[prv[i]] = nxt[i]; prv[nxt[i]] = prv[i];
            if(in[prv[i]] == 0 && good(prv[i]) == 1){
                in[prv[i]] = 1; pq.push({a[prv[i]], prv[i]});
            }
            if(in[nxt[i]] == 0 && good(nxt[i]) == 1){
                in[nxt[i]] = 1;
                pq.push({a[nxt[i]], nxt[i]});
            }
        }
        ll bad = 0, mn = n;
        for(ll i = 1; i <= n; i++){
            if(in[i] == 0) bad++;
            mn = min(mn, a[i]);
        }
        if(bad == 1 && mn == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
