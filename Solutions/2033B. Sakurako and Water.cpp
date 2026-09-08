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
        vector<ll> d(2 * n - 1);
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                ll val; cin >> val;
                d[i - j + n - 1] = min(d[i - j + n - 1], val);
            }
        }
        ll ans = 0;
        for(ll val : d) ans += max(0LL, -val);
        cout << ans << endl;
    }
    return 0;
}
