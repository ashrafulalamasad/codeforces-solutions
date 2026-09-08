#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> h(n);
    for(ll i = 0; i < n; i++) cin >> h[i];
    ll ans = h[0] + n + n - 1;
    for(ll i = 1; i < n; i++){
        ans += abs(h[i] - h[i - 1]);
    }
    cout << ans << endl;
    return 0;
}
