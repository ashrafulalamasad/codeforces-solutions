#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll x0, y0; cin >> x0 >> y0;
    map<int, pair<ll,ll>> closest;
    for(ll i = 0; i < n; i++){
        char t; ll x, y; cin >> t >> x >> y;
        ll dx = x - x0, dy = y - y0;
        if(dx == 0 && dy == 0) continue;
        if(dx == 0){
            ll dir = dy > 0 ? 0 : 1;
            ll dist = abs(dy);
            if(!closest.count(dir) || dist < closest[dir].first){
                closest[dir] = {dist, t};
            }
        }else if(dy == 0){
            ll dir = dx > 0 ? 2 : 3;
            ll dist = abs(dx);
            if(!closest.count(dir) || dist < closest[dir].first){
                closest[dir] = {dist, t};
            }
        }else if(abs(dx) == abs(dy)){
            ll dir;
            if(dx > 0 && dy > 0) dir = 4;
            else if(dx > 0 && dy < 0) dir = 5;
            else if(dx < 0 && dy > 0) dir = 6;
            else dir = 7;
            ll dist = abs(dx);
            if(!closest.count(dir) || dist < closest[dir].first){
                closest[dir] = {dist, t};
            }
        }
    }
    bool chk = false;
    for(auto& [dir, p] : closest){
        char t = p.second;
        if(dir <= 3){
            if(t == 'R' || t == 'Q') chk = true;
        }else{
            if(t == 'B' || t == 'Q') chk = true;
        }
    }
    cout << (chk ? "YES" : "NO") << endl;
    return 0;
}
