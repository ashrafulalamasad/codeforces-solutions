#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q;
        ll sz = 1LL << n;
        vector<ll> a(sz), px(sz + 1, 0);
        for(ll i = 0; i < sz; i++){
            cin >> a[i]; px[i + 1] = px[i] ^ a[i];
        }
        while(q--){
            ll b, c; cin >> b >> c;
            ll id = b - 1, delta = a[id] ^ c, ans = 0;
            for(ll l = 0; l < n; l++){
                ll len = 1LL << l;
                ll blk = id >> l, sib = blk ^ 1;
                ll ours = (px[blk * len + len] ^ px[blk * len]) ^ delta;
                ll other = px[sib * len + len] ^ px[sib * len];
                bool left = (blk % 2 == 0);
                bool win = (ours > other || (ours == other && left));
                if(!win) ans += len;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
