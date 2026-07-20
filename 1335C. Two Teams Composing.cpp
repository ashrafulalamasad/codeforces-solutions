#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> freq(n+1, 0);
        for(ll i=0; i<n; i++){ ll x; cin >> x; freq[(size_t)x]++; }
        ll distinct = 0;
        ll maxf = 0;
        for(ll v: freq) if(v>0) distinct++ , maxf = max(maxf, v);
        ll ans1 = min(maxf-1, distinct);
        ll ans2 = min(maxf, distinct-1);
        ll ans = max(ans1, ans2);
        if(ans < 0) ans = 0;
        cout << ans << endl;
    }
    return 0;
}
