#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll getValue(ll n, ll x, ll y){
    ll answer = 0;
    for(ll level = n; level > 0; level--){
        ll half = 1LL << (level - 1);
        ll block = half * half;
        if(x <= half && y <= half){
        }else if(x > half && y > half){
            answer += block;
            x -= half;
            y -= half;
        }else if(x > half){
            answer += 2 * block;
            x -= half;
        }else{
            answer += 3 * block;
            y -= half;
        }
    }
    return answer + 1;
}

pair<ll, ll> getPosition(ll n, ll d){
    ll x = 1, y = 1;
    for(ll level = n; level > 0; level--){
        ll half = 1LL << (level - 1);
        ll block = half * half;
        ll quadrant = (d - 1) / block;
        d = (d - 1) % block + 1;
        if(quadrant == 1){
            x += half;
            y += half;
        }else if(quadrant == 2){
            x += half;
        }else if(quadrant == 3){
            y += half;
        }
    }
    return {x, y};
}

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q;
        while(q--){
            string type; cin >> type;
            if(type == "->"){
                ll x, y; cin >> x >> y;
                cout << getValue(n, x, y) << endl;
            }else{
                ll d; cin >> d;
                pair<ll, ll> position = getPosition(n, d);
                cout << position.first << " " << position.second << endl;
            }
        }
    }
    return 0;
}
