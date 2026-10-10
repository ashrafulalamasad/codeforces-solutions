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
        vector<ll> suf(n + 1, 0), pref(n + 1, 0);
        for(ll i = n - 1; i >= 0; i--) suf[i] = suf[i + 1] + a[i];
        for(ll i = 0; i < n; i++){
            ll v = a[i];
            if(v < 0) v = -v;
            pref[i + 1] = pref[i] + v;
        }
        ll best = -suf[1];
        for(ll s = 2; s <= n; s++){
            ll cur = a[0] + pref[s - 1] - pref[1] - suf[s];
            if(cur > best) best = cur;
        }
        cout << best << endl;
    }
    return 0;
}
