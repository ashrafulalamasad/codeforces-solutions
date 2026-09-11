#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        if(n == 1){
            for(ll i = 0; i < q; i++){
                ll l, r; cin >> l >> r;
                cout << 0 << " ";
            }
            cout << endl;
            continue;
        }
        ll m = n - 1; vector<ll> d(m);
        for(ll i = 0; i < m; i++){
            d[i] = abs(a[i + 1] - a[i]);
        }
        ll K = 1; while((1 << K) <= m) K++;
        vector<vector<ll>> st(K, vector<ll>(m));
        for(ll i = 0; i < m; i++) st[0][i] = d[i];
        for(ll k = 1; k < K; k++){
            for(ll i = 0; i + (1 << k) <= m; i++){
                st[k][i] = gcd(st[k - 1][i], st[k - 1][i + (1 << (k - 1))]);
            }
        }
        vector<ll> lg(m + 1, 0);
        for(ll i = 2; i <= m; i++) lg[i] = lg[i / 2] + 1;
        for(ll i = 0; i < q; i++){
            ll l, r; cin >> l >> r;
            if(l == r){
                cout << 0 << " ";
            }else{
                ll l0 = l - 1, r0 = r - 1;
                ll len = r0 - l0, k = lg[len];
                ll ans = gcd(st[k][l0], st[k][r0 - (1 << k)]);
                cout << ans << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
