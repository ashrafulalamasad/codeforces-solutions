#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> c(n + 1);
    for(ll i = 1; i <= n; i++) cin >> c[i];
    vector<vector<ll>> dep(n + 1);
    for(ll i = 1; i <= n; i++){
        ll k; cin >> k; dep[i].resize(k);
        for(ll j = 0; j < k; j++) cin >> dep[i][j];
    }
    ll ans = LLONG_MAX;
    for(ll start = 1; start <= 3; start++){
        vector<ll> done(n + 1, 0);
        ll left = n, cur = start, time = 0;
        while(left > 0){
            bool progress = true;
            while(progress){
                progress = false;
                for(ll i = 1; i <= n; i++){
                    if(done[i] || c[i] != cur) continue;
                    bool ready = true;
                    for(ll d : dep[i]) if(!done[d]) ready = false;
                    if(ready){
                        done[i] = 1; left--; time++; progress = true;
                    }
                }
            }
            if(left > 0){
                cur = cur % 3 + 1; time++;
            }
        }
        ans = min(ans, time);
    }
    cout << ans << endl;
    return 0;
}
