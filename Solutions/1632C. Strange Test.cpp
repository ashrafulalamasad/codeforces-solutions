#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b; cin >> a >> b;
        ll ans = b - a;
        for(ll ap = a; ap <= b; ap++){
            ll bp = 0;
            for(ll k = 20; k >= 0; k--){
                ll abit = (ap >> k) & 1;
                ll bbit = (b >> k) & 1;
                if(abit == 0 && bbit == 1) bp = bp + (1LL << k);
                else if(abit == 1 && bbit == 1) bp = bp + (1LL << k);
                else if(abit == 1 && bbit == 0){
                    bp = bp + (1LL << k);
                    break;
                }
            }
            ll cur = ap | bp;
            ll cost = (ap - a) + (bp - b) + (cur - bp) + 1;
            if(cost < ans) ans = cost;
        }
        cout << ans << endl;
    }
    return 0;
}
