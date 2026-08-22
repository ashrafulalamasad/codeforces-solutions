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
        vector<ll> bit(n + 1, 0);
        auto add = [&](ll idx, ll val){
            for(; idx <= n; idx += idx & -idx){
                bit[idx] += val;
            }
        };
        auto query = [&](ll idx){
            ll sum = 0;
            for(; idx > 0; idx -= idx & -idx){
                sum += bit[idx];
            }
            return sum;
        };
        ll ans = 0;
        for(ll i = n - 1; i >= 0; i--){
            ans += query(a[i]);
            add(a[i], 1);
        }
        cout << ans << endl;
    }
    return 0;
}
