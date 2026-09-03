#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll places(ll x){
    ll cnt = 1;
    while(x >= 7){
        x /= 7; cnt++;
    }
    return cnt;
}

ll digitMask(ll x, ll len){
    ll mask = 0;
    for(ll i = 0; i < len; i++){
        ll d = x % 7; x /= 7;
        if(mask & (1LL << d)) return -1;
        mask |= (1LL << d);
    }
    return mask;
}

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    ll a = places(n - 1), b = places(m - 1);
    if(a + b > 7){
        cout << 0 << endl;
        return 0;
    }
    vector<ll> maskH(n), maskM(m);
    for(ll h = 0; h < n; h++) maskH[h] = digitMask(h, a);
    for(ll v = 0; v < m; v++) maskM[v] = digitMask(v, b);
    ll ans = 0;
    for(ll h = 0; h < n; h++){
        if(maskH[h] < 0) continue;
        for(ll v = 0; v < m; v++){
            if(maskM[v] < 0) continue;
            if((maskH[h] & maskM[v]) == 0) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
