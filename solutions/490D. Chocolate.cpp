#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a1, b1, a2, b2; cin >> a1 >> b1 >> a2 >> b2;
    auto getStates = [](ll a, ll b){
        map<ll, tuple<ll,ll,ll>> mp;
        queue<tuple<ll,ll,ll>> q;
        q.push({a, b, 0});
        while(!q.empty()){
            auto [x, y, s] = q.front(); q.pop();
            ll area = x * y;
            if(mp.count(area) && get<2>(mp[area]) <= s) continue;
            mp[area] = {x, y, s};
            if(x % 2 == 0) q.push({x/2, y, s+1});
            if(y % 2 == 0) q.push({x, y/2, s+1});
            if(x % 3 == 0) q.push({x/3*2, y, s+1});
            if(y % 3 == 0) q.push({x, y/3*2, s+1});
        }
        return mp;
    };
    auto mp1 = getStates(a1, b1);
    auto mp2 = getStates(a2, b2);
    ll best = LLONG_MAX, ra1, rb1, ra2, rb2;
    for(auto& [area, val] : mp1){
        if(mp2.count(area)){
            ll steps = get<2>(val) + get<2>(mp2[area]);
            if(steps < best){
                best = steps;
                ra1 = get<0>(val); rb1 = get<1>(val);
                ra2 = get<0>(mp2[area]); rb2 = get<1>(mp2[area]);
            }
        }
    }
    if(best == LLONG_MAX) cout << -1 << "\n";
    else{
        cout << best << "\n";
        cout << ra1 << " " << rb1 << "\n";
        cout << ra2 << " " << rb2 << "\n";
    }
    return 0;
}
