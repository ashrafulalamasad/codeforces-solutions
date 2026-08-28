#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k; cin >> n >> m >> k; vector<ll> b(n), c(m);
        for(ll i = 0; i < n; i++) cin >> b[i];
        for(ll i = 0; i < m; i++) cin >> c[i];
        ll ans = 0;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                if(b[i] + c[j] <= k) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
