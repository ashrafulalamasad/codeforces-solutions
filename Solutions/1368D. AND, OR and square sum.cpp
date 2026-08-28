#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> cnt(20, 0);
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        for(ll b = 0; b < 20; b++){
            if((x >> b) & 1) cnt[b]++;
        }
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        ll v = 0;
        for(ll b = 0; b < 20; b++){
            if(cnt[b] > 0){
                cnt[b]--;
                v |= (1LL << b);
            }
        }
        ans += v * v;
    }
    cout << ans << endl;
    return 0;
}
