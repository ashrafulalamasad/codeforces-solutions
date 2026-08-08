#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, x, y; cin >> n >> m >> x >> y;
        ll N = n + m;
        vector<ll> mask(N + 1, 0);
        for(ll i = 0; i < x; i++){
            ll v; cin >> v;
            mask[v] |= 1;
        }
        for(ll i = 0; i < y; i++){
            ll v; cin >> v;
            mask[v] |= 2;
        }
        ll cntA = 0, cntB = 0, total = 0;
        ll limit = n + m - 1;
        ll ans = 0;
        for(ll v = N; v >= 1; v--){
            if(mask[v] == 0){
                continue;
            }
            if(mask[v] == 1){
                if(cntA < n && total < limit){
                    ans += v;
                    cntA++;
                    total++;
                }
            }else if(mask[v] == 2){
                if(cntB < m && total < limit){
                    ans += v;
                    cntB++;
                    total++;
                }
            }else{
                if(total < limit){
                    ans += v;
                    total++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
