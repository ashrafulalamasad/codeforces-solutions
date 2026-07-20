#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        vector<ll> a(n);
        for(auto &x : a) cin >> x;
        vector<pair<ll,ll>> mons(m);
        for(ll i = 0; i < m; ++i) cin >> mons[i].first;
        for(ll i = 0; i < m; ++i) cin >> mons[i].second;
        sort(mons.begin(), mons.end());
        priority_queue<ll, vector<ll>, greater<ll>> swords;
        for(auto x : a) swords.push(x);
        priority_queue<ll> available;
        ll idx = 0;
        ll kills = 0;
        while(!swords.empty()){
            ll x = swords.top(); swords.pop();
            while(idx < m && mons[idx].first <= x){
                available.push(mons[idx].second);
                ++idx;
            }
            if(available.empty()) continue;
            ll bestC = available.top(); available.pop();
            ++kills;
            if(bestC > 0) swords.push(max(x, bestC));
        }
        cout << kills << "\n";
    }
    return 0;
}
