#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; string s; cin >> n >> q >> s;
        vector<ll> x(n, 0), tr1(n, 0), tr0(n, 0);
        for(ll i = 0; i < n; i++){
            char expect = (i % 2 == 0) ? '0' : '1';
            x[i] = (s[i] != expect);
        }
        for(ll i = 1; i < n; i++){
            tr1[i] = tr1[i - 1] + (x[i] == 1 && x[i - 1] == 0);
            tr0[i] = tr0[i - 1] + (x[i] == 0 && x[i - 1] == 1);
        }
        while(q--){
            ll l, r, k; cin >> l >> r >> k;
            l--; r--;
            ll runs1 = tr1[r] - tr1[l] + x[l];
            ll runs0 = tr0[r] - tr0[l] + (1 - x[l]);
            if(min(runs0, runs1) <= k) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
