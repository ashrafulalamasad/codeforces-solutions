#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, T = 0; cin >> n; vector<string> g(n);
        for(ll i = 0; i < n; i++) cin >> g[i];
        vector<ll> cnt(n, 0);
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                if(g[i][j] == '1'){
                    T++;
                    cnt[(i - j + n) % n]++;
                }
            }
        }
        ll ans = T + n;
        for(ll d = 0; d < n; d++) ans = min(ans, T + n - 2 * cnt[d]);
        cout << ans << endl;
    }
    return 0;
}
