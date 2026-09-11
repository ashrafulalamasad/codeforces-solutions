#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        if(n == 1){
            cout << 1 << endl; continue;
        }
        ll K = 1, m = n - 1; vector<ll> d(m);
        for(ll i = 0; i < m; i++){
            d[i] = abs(a[i + 1] - a[i]);
        }
        while((1 << K) <= m) K++;
        vector<vector<ll>> st(K, vector<ll>(m));
        for(ll i = 0; i < m; i++) st[0][i] = d[i];
        for(ll k = 1; k < K; k++){
            for(ll i = 0; i + (1 << k) <= m; i++){
                st[k][i] = gcd(st[k - 1][i], st[k - 1][i + (1 << (k - 1))]);
            }
        }
        vector<ll> lg(m + 1, 0);
        for(ll i = 2; i <= m; i++) lg[i] = lg[i / 2] + 1;
        auto get = [&](ll l, ll r)->ll {
            ll len = r - l + 1, k = lg[len];
            return gcd(st[k][l], st[k][r - (1 << k) + 1]);
        };
        ll ans = 1, l = 0;
        for(ll r = 0; r < m; r++){
            while(l <= r && get(l, r) == 1) l++;
            if(l <= r){
                ans = max(ans, r - l + 2);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
