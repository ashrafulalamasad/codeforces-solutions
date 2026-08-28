#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p(2 * n);
        for(ll i = 0; i < 2 * n; i++) cin >> p[i];
        if(n == 1){
            cout << abs(p[0] - p[1]) << endl;
            continue;
        }
        ll ans = 0;
        for(ll i = 0; i < 2 * n; i++) ans += abs(p[i]);
        if(n == 2){
            ll cost = 0;
            for(ll i = 0; i < 2 * n; i++) cost += abs(p[i] - n);
            ans = min(ans, cost);
        }
        if(n % 2 == 0){
            ll base = 0;
            for(ll i = 0; i < 2 * n; i++) base += abs(p[i] + 1);
            ll best = LLONG_MAX;
            for(ll i = 0; i < 2 * n; i++) best = min(best, base - abs(p[i] + 1) + abs(p[i] - n));
            ans = min(ans, best);
        }
        cout << ans << endl;
    }
    return 0;
}
