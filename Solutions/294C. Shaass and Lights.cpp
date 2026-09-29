#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<ll> a(m);
    for(ll i = 0; i < m; i++) cin >> a[i];
    sort(a.begin(), a.end());
    ll tot = n - m;
    vector<ll> fact(n + 1), pow2(n + 1); fact[0] = 1;
    for(ll i = 1; i <= n; i++) fact[i] = fact[i - 1] * i % 1000000007;
    pow2[0] = 1;
    for(ll i = 1; i <= n; i++) pow2[i] = pow2[i - 1] * 2 % 1000000007;
    auto modPow = [&](ll b, ll e){
        ll r = 1;
        while(e > 0){
            if(e % 2 == 1) r = r * b % 1000000007;
            b = b * b % 1000000007;
            e = e / 2;
        }
        return r;
    };
    ll ans = fact[tot];
    vector<ll> gaps;
    gaps.push_back(a[0] - 1);
    for(ll i = 0; i + 1 < m; i++) gaps.push_back(a[i + 1] - a[i] - 1);
    gaps.push_back(n - a[m - 1]);
    for(ll i = 0; i < m + 1; i++) ans = ans * modPow(fact[gaps[i]], 1000000005) % 1000000007;
    for(ll i = 1; i < m; i++){
        ll len = gaps[i];
        if(len > 0) ans = ans * pow2[len - 1] % 1000000007;
    }
    cout << ans << endl;
    return 0;
}
