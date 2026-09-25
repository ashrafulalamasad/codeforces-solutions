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
    vector<ll> lg(m + 1); lg[1] = 0;
    for(ll i = 2; i <= m; i++) lg[i] = lg[i / 2] + 1;
    ll LOG = lg[m] + 1;
    vector<vector<ll>> st(LOG, vector<ll>(m));
    for(ll i = 0; i < m; i++) st[0][i] = a[i];
    for(ll k = 1; k < LOG; k++){
        for(ll i = 0; i + (1LL << k) <= m; i++){
            st[k][i] = max(st[k - 1][i], st[k - 1][i + (1LL << (k - 1))]);
        }
    }
    ll q; cin >> q;
    for(ll i = 0; i < q; i++){
        ll xs, ys, xf, yf, k; cin >> xs >> ys >> xf >> yf >> k;
        if(abs(xs - xf) % k != 0 || abs(ys - yf) % k != 0) cout << "NO" << endl;
        else{
            ll l = min(ys, yf) - 1;
            ll r = max(ys, yf) - 1;
            ll len = r - l + 1;
            ll j = lg[len];
            ll mx = max(st[j][l], st[j][r - (1LL << j) + 1]);
            ll high = xs + (n - xs) / k * k;
            if(high > mx) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
