#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll ans = 0;
        auto check = [&](ll mask){
            map<ll, ll> cnt;
            for(ll x : a) cnt[x & mask]++;
            for(ll x : b) cnt[(~x) & mask]--;
            for(auto [x, y] : cnt){
                if(y != 0) return false;
            }
            return true;
        };
        for(ll bit = 29; bit >= 0; bit--){
            if(check(ans | (1LL << bit))) ans = ans | (1LL << bit);
        }
        cout << ans << endl;
    }
    return 0;
}
