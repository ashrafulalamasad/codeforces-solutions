#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k = 0; cin >> n >> m;
        for(ll i = 0; i < n; i++){
            ll l, mex = 0; cin >> l;
            vector<ll> a(l), seen(l + 2, 0);
            for(ll j = 0; j < l; j++) cin >> a[j];
            for(ll j = 0; j < l; j++) if(a[j] <= l + 1) seen[a[j]] = 1;
            while(seen[mex]) mex++;
            seen[mex] = 1;
            while(seen[mex]) mex++;
            k = max(k, mex);
        }
        if(k >= m) cout << (m + 1) * k << endl;
        else cout << k * k + (m + k) * (m - k + 1) / 2 << endl;
    }
    return 0;
}
