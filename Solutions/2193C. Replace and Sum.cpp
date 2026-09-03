#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q; vector<ll> a(n), b(n), c(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        for(ll i = 0; i < n; i++) c[i] = max(a[i], b[i]);
        vector<ll> sm(n); sm[n - 1] = c[n - 1];
        for(ll i = n - 2; i >= 0; i--) sm[i] = max(c[i], sm[i + 1]);
        vector<ll> pre(n + 1, 0);
        for(ll i = 0; i < n; i++) pre[i + 1] = pre[i] + sm[i];
        while(q--){
            ll l, r; cin >> l >> r;
            cout << pre[r] - pre[l - 1];
            if(q) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
