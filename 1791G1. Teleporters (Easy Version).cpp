#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, c; cin >> n >> c;
        vector<ll> cost(n);
        for(ll i = 0; i < n; i++){
            ll a; cin >> a;
            cost[i] = a + (i + 1);
        }
        sort(cost.begin(), cost.end());
        vector<ll> pre(n + 1, 0);
        for(ll i = 0; i < n; i++) pre[i + 1] = pre[i] + cost[i];
        ll ans = 0;
        for(ll k = 1; k <= n; k++){
            if(pre[k] <= c) ans = k;
            else break;
        }
        cout << ans << endl;
    }
    return 0;
}
