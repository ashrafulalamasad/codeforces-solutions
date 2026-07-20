#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> freq(n + 1, 0);
        for(ll i = 0; i < n; ++i){
            ll x; cin >> x;
            if(x <= n) ++freq[x];
        }
        vector<ll> cnt(n + 1, 0);
        for(ll val = 1; val <= n; ++val){
            if(freq[val] == 0) continue;
            for(ll p = val; p <= n; p += val){
                cnt[p] += freq[val];
            }
        }
        ll ans = 0;
        for(ll i = 1; i <= n; ++i) ans = max(ans, cnt[i]);
        cout << ans << endl;
    }
    return 0;
}
