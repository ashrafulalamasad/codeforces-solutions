#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll x, y, z, k; cin >> x >> y >> z >> k;
        ll dims[3] = {x, y, z};
        sort(dims, dims + 3);
        ll mx = max({x, y, z});
        ll ans = 0;
        for(ll a = 1; a <= mx && a <= k; ++a){
            if(k % a) continue;
            ll rem = k / a;
            for(ll b = 1; b <= mx && b <= rem; ++b){
                if(rem % b) continue;
                ll c = rem / b;
                if(c > mx) continue;
                ll f[3] = {a, b, c};
                sort(f, f + 3);
                if(f[0] <= dims[0] && f[1] <= dims[1] && f[2] <= dims[2]){
                    ll cur = (dims[0] - f[0] + 1) * (dims[1] - f[1] + 1) * (dims[2] - f[2] + 1);
                    ans = max(ans, cur);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
