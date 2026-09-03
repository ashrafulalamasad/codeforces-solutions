#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k, ans = 0; cin >> n >> m >> k;
        ll w; cin >> w; vector<ll> a(w), cnt;
        for(ll i = 0; i < w; i++) cin >> a[i];
        for(ll i = 1; i <= n; i++){
            ll gi = min(min(i, n - i + 1), min(k, n - k + 1));
            for(ll j = 1; j <= m; j++){
                ll gj = min(min(j, m - j + 1), min(k, m - k + 1));
                cnt.push_back(gi * gj);
            }
        }
        sort(cnt.rbegin(), cnt.rend());
        sort(a.rbegin(), a.rend());
        for(ll i = 0; i < w; i++) ans += a[i] * cnt[i];
        cout << ans << endl;
    }
    return 0;
}
