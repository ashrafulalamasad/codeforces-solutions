#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

pair<ll, ll> c[200005];
ll tot[200005];

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n;
        for(ll i = 1; i <= n; ++i) cin >> c[i].first;
        for(ll i = 1; i <= n; ++i) cin >> c[i].second;
        sort(c + 1, c + n + 1);
        for(ll i = 1; i * i <= 2 * n; ++i){
            fill(tot + 1, tot + n + 1, 0);
            for(ll j = 1; j <= n; ++j){
                ll x = c[j].first, y = c[j].second, target = i * x - y;
                if(target >= 1 && target <= n){
                    ans += tot[target];
                }
                if(x == i){
                    tot[y]++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
