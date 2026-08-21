#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    map<string, ll> id; vector<string> names;
    vector<ll> pts, gf, ga, games;
    auto getId = [&](const string& s) -> ll {
        auto it = id.find(s);
        if(it != id.end()){
            return it->second;
        }
        ll idx = (ll)names.size();
        id[s] = idx;
        names.push_back(s);
        pts.push_back(0);
        gf.push_back(0);
        ga.push_back(0);
        games.push_back(0);
        return idx;
    };
    for(ll i = 0; i < 5; i++){
        string t1, t2, sc; cin >> t1 >> t2 >> sc;
        ll a = getId(t1), b = getId(t2), colon = (ll)sc.find(':');
        ll g1 = stoll(sc.substr(0, colon)), g2 = stoll(sc.substr(colon + 1));
        games[a]++; games[b]++; gf[a] += g1; ga[a] += g2; gf[b] += g2; ga[b] += g1;
        if(g1 > g2){
            pts[a] += 3;
        }else if(g1 < g2){
            pts[b] += 3;
        }else{
            pts[a]++;
            pts[b]++;
        }
    }
    auto itBer = id.find("BERLAND");
    if(itBer == id.end()){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    ll ber = itBer->second, teams = (ll)names.size(), opp = -1;
    for(ll i = 0; i < teams; i++){
        if(i != ber && games[i] == 2){
            opp = i;
        }
    }
    if(opp == -1){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    vector<ll> order(teams);
    for(ll i = 0; i < teams; i++) order[i] = i;
    sort(order.begin(), order.end(), [&](ll x, ll y){
        return names[x] < names[y];
    });
    vector<ll> lexPos(teams);
    for(ll i = 0; i < teams; i++) lexPos[order[i]] = i;
    ll berPts = pts[ber] + 3, pointsAbove = 0;
    for(ll i = 0; i < teams; i++){
        if(i != ber && pts[i] > berPts) pointsAbove++;
    }
    if(pointsAbove >= 2){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    auto ok = [&](ll x, ll y) -> bool {
        ll bgf = gf[ber] + x, bga = ga[ber] + y, bd = bgf - bga, above = 0;
        for(ll i = 0; i < teams; i++){
            if(i == ber){
                continue;
            }
            ll p = pts[i], g = gf[i], a = ga[i];
            if(i == opp){
                g += y; a += x;
            }
            ll d = g - a;
            bool isAbove = false;
            if(p > berPts){
                isAbove = true;
            }else if(p == berPts){
                if(d > bd){
                    isAbove = true;
                }else if(d == bd){
                    if(g > bgf){
                        isAbove = true;
                    }else if(g == bgf && lexPos[i] < lexPos[ber]){
                        isAbove = true;
                    }
                }
            }
            if(isAbove){
                above++;
                if(above > 1){
                    return false;
                }
            }
        }
        return true;
    };
    const ll LIM = 1000;
    for(ll d = 1; d <= LIM; d++){
        for(ll y = 0; y <= LIM; y++){
            ll x = y + d;
            if(ok(x, y)){
                cout << x << ":" << y << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
