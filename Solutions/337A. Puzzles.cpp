#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n,m; cin>>n>>m;
    vector<ll> a(m);
    for(ll i=0; i<m; i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll ans = LLONG_MAX;
    for(ll i=0; i<=m-n; i++){
        ans = min(ans, a[i+n-1] - a[i]);
    }
    cout << ans;
    return 0;
}
