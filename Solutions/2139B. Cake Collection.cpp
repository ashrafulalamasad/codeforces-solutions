#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end(), greater<ll>());
        ll ans = 0;
        for(ll i = 0; i < n; i++) if(m > i) ans += a[i] * (m - i);
        cout << ans << endl;
    }
    return 0;
}
