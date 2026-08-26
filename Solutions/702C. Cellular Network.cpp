#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<ll> a(n), b(m);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];
    ll ans = 0, ti = 0;
    for(ll i = 0; i < n; i++){
        while(ti + 1 < m && abs(a[i] - b[ti+1]) <= abs(a[i] - b[ti])) ti++;
        ans = max(ans, abs(a[i] - b[ti]));
    }
    cout << ans << endl;
    return 0;
}
