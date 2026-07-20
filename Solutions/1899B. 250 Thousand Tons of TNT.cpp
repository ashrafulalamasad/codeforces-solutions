#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> a(n+1,0);
        for(ll i=1; i<=n; i++) cin >> a[i], a[i] += a[i-1];
        vector<ll> d;
        for(ll i=1;i*i<=n;i++){
            if(n%i == 0){
                d.push_back(i);
                if(i != n/i) d.push_back(n/i);
            }
        }
        sort(d.begin(), d.end());
        ll ans = 0;
        for(ll k:d){
            if(k == n)continue;
            ll mx = LLONG_MIN, mn = LLONG_MAX;
            for(ll i=k; i<=n; i+=k){
                ll s = a[i]-a[i-k];
                mx = max(mx,s);
                mn = min(mn,s);
            }
            ans = max(ans, mx-mn);
        }
        cout << ans << endl;
    }
    return 0;
}
