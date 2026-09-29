#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<string> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    for(ll x1 = 0; x1 < n; x1++){
        for(ll x2 = x1; x2 < n; x2++){
            for(ll y1 = 0; y1 < m; y1++){
                for(ll y2 = y1; y2 < m; y2++){
                    ll ok = 1;
                    for(ll i = x1; i <= x2; i++){
                        for(ll j = y1; j <= y2; j++){
                            if(a[i][j] == '1') ok = 0;
                        }
                    }
                    if(ok) ans = max(ans, 2 * (x2 - x1 + y2 - y1 + 2));
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
