#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x, y; cin >> x >> y; vector<ll> c(7);
        for(ll i = 1; i <= 6; i++) cin >> c[i];
        for(ll k = 0; k < 10; k++){
            for(ll i = 1; i <= 6; i++){
                ll p = i - 1;
                if(p == 0) p = 6;
                ll q = i + 1;
                if(q == 7) q = 1;
                c[i] = min(c[i], c[p] + c[q]);
            }
        }
        ll ans = 0;
        if(x >= 0 && y >= x){
            ans = x * c[1] + (y - x) * c[2];
        }else if(x <= 0 && y >= 0){
            ans = y * c[2] + (-x) * c[3];
        }else if(y <= 0 && x <= y){
            ans = (y - x) * c[3] + (-y) * c[4];
        }else if(x <= 0 && y <= x){
            ans = (-x) * c[4] + (x - y) * c[5];
        }else if(x >= 0 && y <= 0){
            ans = (-y) * c[5] + x * c[6];
        }else{
            ans = y * c[1] + (x - y) * c[6];
        }
        cout << ans << endl;
    }
    return 0;
}
