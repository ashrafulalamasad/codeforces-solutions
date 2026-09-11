#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, x; cin >> n >> x;
    vector<tuple<ll, ll, ll>> v(n);
    for(ll i = 0; i < n; i++){
        ll li, ri, ci; cin >> li >> ri >> ci;
        v[i] = {li, ri, ci};
    }
    sort(v.begin(), v.end());
    vector<ll> minCost(x + 1, -1);
    ll ans = -1;
    priority_queue<pair<ll, pair<ll, ll>>, vector<pair<ll, pair<ll, ll>>>, greater<pair<ll, pair<ll, ll>>>> pq;
    for(ll i = 0; i < n; i++){
        ll li = get<0>(v[i]), ri = get<1>(v[i]), ci = get<2>(v[i]);
        while(!pq.empty() && pq.top().first < li){
            auto top = pq.top();
            pq.pop();
            ll dur = top.second.first, cost = top.second.second;
            if(dur <= x){
                if(minCost[dur] == -1 || cost < minCost[dur]){
                    minCost[dur] = cost;
                }
            }
        }
        ll dur = ri - li + 1;
        ll need = x - dur;
        if(need >= 1 && need <= x && minCost[need] != -1){
            ll total = ci + minCost[need];
            if(ans == -1 || total < ans){
                ans = total;
            }
        }
        pq.push({ri, {dur, ci}});
    }
    cout << ans << endl;
    return 0;
}
