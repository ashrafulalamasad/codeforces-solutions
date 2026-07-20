#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll xa, ya, xb, yb; cin >> xa >> ya >> xb >> yb;
    ll n; cin >> n;
    vector<ll> rx(n), ry(n), rr(n);
    for(ll i=0; i<n; i++){
        cin >> rx[i] >> ry[i] >> rr[i];
    }
    ll xmin = min(xa, xb);
    ll xmax = max(xa, xb);
    ll ymin = min(ya, yb);
    ll ymax = max(ya, yb);
    auto covered = [&](ll px, ll py)->bool{
        for(ll i=0; i<n; i++){
            ll dx = px - rx[i];
            ll dy = py - ry[i];
            ll dist2 = dx*dx + dy*dy;
            ll r2 = rr[i] * rr[i];
            if(dist2 <= r2) return true;
        }
        return false;
    };
    ll ans = 0;
    for(ll px=xmin; px<=xmax; px++){
        if(!covered(px, ymin)) ans++;
        if(!covered(px, ymax)) ans++;
    }
    for(ll py=ymin+1; py<=ymax-1; py++){
        if(!covered(xmin, py)) ans++;
        if(!covered(xmax, py)) ans++;
    }
    cout << ans << endl;
    return 0;
}
