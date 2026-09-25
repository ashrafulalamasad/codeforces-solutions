#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x; cin >> n >> x; vector<ll> a(n), divs;
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll d = 1; d * d <= x; d++){
            if(x % d == 0){
                divs.push_back(d);
                if(d * d != x) divs.push_back(x / d);
            }
        }
        ll ans = 0, sz = divs.size();
        for(ll k = 0; k < sz; k++){
            ll d = divs[k];
            if(d == 1) continue;
            ll sum = 0;
            for(ll i = 0; i < n; i++){
                if(a[i] % d == 0) sum += a[i];
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}
