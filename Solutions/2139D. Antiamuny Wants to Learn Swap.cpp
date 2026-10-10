#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q; vector<ll> a(n + 2);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        vector<ll> mxl(n + 1), mir(n + 1);
        for(ll i = 1; i <= n; i++){
            mxl[i] = i - 1;
            while(mxl[i] > 0 && a[mxl[i]] < a[i]) mxl[i] = mxl[mxl[i]];
        }
        for(ll i = n; i >= 1; i--){
            mir[i] = i + 1;
            while(mir[i] <= n && a[mir[i]] > a[i]) mir[i] = mir[mir[i]];
        }
        vector<ll> L(n + 1, 0);
        for(ll i = 2; i < n; i++){
            if(mxl[i] > 0 && mir[i] <= n) L[mir[i]] = max(L[mir[i]], mxl[i]);
        }
        for(ll i = 1; i <= n; i++) L[i] = max(L[i], L[i - 1]);
        for(ll i = 0; i < q; i++){
            ll l, r; cin >> l >> r;
            if(l <= L[r]) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}
