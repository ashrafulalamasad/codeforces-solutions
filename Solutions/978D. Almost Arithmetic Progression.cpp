#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n; cin >> n; vector<ll> b(n);
    for(ll i = 0; i < n; i++) cin >> b[i];
    if(n <= 2){
        cout << 0 << endl;
        return 0;
    }
    ll ans = -1;
    for(ll da = -1; da <= 1; da++){
        for(ll db = -1; db <= 1; db++){
            ll a0 = b[0] + da;
            ll a1 = b[1] + db;
            ll d = a1 - a0;
            ll cost = abs(da) + abs(db);
            bool ok = true;
            for(ll i = 2; i < n; i++){
                ll expected = a0 + i * d;
                ll diff = abs(b[i] - expected);
                if(diff > 1){
                    ok = false;
                    break;
                }
                cost += diff;
            }
            if(ok){
                if(ans == -1 || cost < ans){
                    ans = cost;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
