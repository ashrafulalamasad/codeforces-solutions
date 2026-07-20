#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n, q; cin >> n >> q; vector<ll> a(n);
        for(ll i = 0; i < n; ++i) cin >> a[i];
        vector<ll> pref(n + 1, 0);
        for(ll i = 0; i < n; ++i) pref[i + 1] = pref[i] + a[i];
        ll total = pref[n];
        auto range_sum = [&](ll start, ll len){
            if(len <= 0) return 0LL;
            if(start + len <= n) return pref[start + len] - pref[start];
            return (pref[n] - pref[start]) + pref[start + len - n];
        };
        auto prefix_b = [&](ll p){
            if(p < 0) return 0LL;
            ll rows = p / n;
            ll rem = p % n;
            return rows * total + range_sum(rows, rem + 1);
        };
        while(q--){
            ll l, r; cin >> l >> r;
            cout << prefix_b(r - 1) - prefix_b(l - 2) << endl;
        }
    }
    return 0;
}
