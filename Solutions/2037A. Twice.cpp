#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> c(n + 1, 0);
        for(ll i = 0; i < n; i++){
            ll x; cin >> x; c[x]++;
        }
        ll ans = 0;
        for(ll i = 1; i <= n; i++){
            ans = ans + c[i] / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
