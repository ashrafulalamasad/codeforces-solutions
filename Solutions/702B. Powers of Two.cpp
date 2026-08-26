#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    map<ll, ll> cnt;
    for(ll x : a) cnt[x]++;
    ll ans = 0;
    for(auto& [v, c] : cnt){
        for(ll x = 1; x <= 31; x++){
            ll b = (1LL << x) - v;
            if(b > v && cnt.count(b)) ans += c * cnt[b];
        }
        if((v & (v - 1)) == 0 && v > 0){
            ans += c * (c - 1) / 2;
        }
    }
    cout << ans << endl;
    return 0;
}
