#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n+1);
        for(ll i=1; i<=n; i++) cin >> a[i];
        unordered_map<ll,ll> cnt;
        ll ans = 0;
        for(ll i=1; i<=n; i++){
            ll key = a[i]-i;
            ans += cnt[key];
            cnt[key]++;
        }
        cout << ans << endl;
    }
    return 0;
}
