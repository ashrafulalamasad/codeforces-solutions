#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, ans = 0; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) ans += __builtin_popcountll(a[i]);
        for(ll i = 0; i <= 61; i++){
            ll cost = 1LL << i;
            if(cost > k) break;
            for(ll j = 0; j < n; j++){
                if(((a[j] >> i) & 1LL) == 0 && (a[j] & (cost - 1)) == cost - 1){
                    if(cost > k) break;
                    k -= cost;
                    a[j] += cost;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
