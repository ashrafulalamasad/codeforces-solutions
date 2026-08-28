#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> k(n);
        for(ll i = 0; i < n; i++) cin >> k[i];
        sort(k.begin(), k.end());
        while(m--){
            ll a, b, c; cin >> a >> b >> c;
            ll id = lower_bound(k.begin(), k.end(), b) - k.begin();
            bool ok = false; ll ans = 0;
            for(ll j = id - 1; j <= id; j++){
                if(j < 0 || j >= n) continue;
                ll t = b - k[j];
                if(t * t < 4 * a * c){
                    ok = true; ans = k[j];
                }
            }
            if(ok){
                cout << "YES" << endl;
                cout << ans << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
