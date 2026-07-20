#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ld long double

int main(){
    fast;
    ll vp, vd, t, f, c; cin >> vp >> vd >> t >> f >> c;
    if(vp >= vd){
        cout << 0 << endl;
        return 0;
    }
    ld s = (ld)vp * (ld)t;
    ll cnt = 0;
    const ld EPS = 1e-12L;
    while(true){
        ld dt = s / ((ld)vd - (ld)vp);
        ld catch_pos = s + (ld)vp * dt;
        if(catch_pos + EPS >= (ld)c) break;
        cnt++;
        s = catch_pos + (ld)vp * (dt + (ld)f);
    }
    cout << cnt << endl;
    return 0;
}
