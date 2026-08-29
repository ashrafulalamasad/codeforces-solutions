#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, ans = 0; cin >> n >> m;
        vector<ll> cnt(m + 2, 0), suf(m + 3, 0);
        for(ll i = 0; i < n; i++){
            ll a; cin >> a;
            cnt[a]++;
        }
        for(ll i = m; i >= 1; i--){
            suf[i] = suf[i + 1] + cnt[i];
        }
        for(ll y = 1; y <= m; y++){
            ll cur = suf[y];
            if(2 * y <= m){
                cur += cnt[2 * y];
            }
            ans = max(ans, cur);
        }
        cout << ans << endl;
    }
    return 0;
}
