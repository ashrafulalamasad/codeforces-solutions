#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q;
        vector<ll> a(n), p(n+1);
        for(ll i=0; i<n; i++){
            cin >> a[i];
            p[i+1] = p[i] ^ (a[i] & 1);
        }
        ll total = p[n];
        while(q--){
            ll l, r, k; cin >> l >> r >> k;
            ll sub = p[r] ^ p[l-1];
            ll add = (k & 1) * ((r-l+1) & 1);
            cout << ((total ^ sub ^ add) ? "YES" : "NO") << endl;
        }
    }
    return 0;
}
