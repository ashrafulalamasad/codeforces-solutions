#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<ll> h(n), ans(n);
    for(ll i=0; i<n; i++) cin >> h[i];
    ll mx = 0;
    for(ll i=n-1; i>=0; i--){
        if(h[i] > mx) ans[i] = 0;
        else ans[i] = mx - h[i] + 1;
        mx = max(mx, h[i]);
    }
    for(ll i=0; i<n; i++) cout << ans[i] << " ";
    return 0;
}
