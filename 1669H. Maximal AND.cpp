#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll ans = 0;
        for(ll j = 30; j >= 0; j--){
            ll cnt = 0;
            for(ll i = 0; i < n; i++){
                if((a[i] >> j) & 1) cnt++;
            }
            if(n - cnt <= k){
                k -= (n - cnt);
                ans |= (1LL << j);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
