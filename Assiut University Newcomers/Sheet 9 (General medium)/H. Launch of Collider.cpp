#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; string dir; cin >> n >> dir;
    vector<ll> x(n);
    for(ll i = 0; i < n; i++) cin >> x[i];
    ll ans = LLONG_MAX;
    for(ll i = 1; i < n; i++){
        if(dir[i] == 'L' && dir[i - 1] == 'R') ans = min(ans, (x[i] - x[i - 1]) / 2);
    }
    if(ans == LLONG_MAX) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
