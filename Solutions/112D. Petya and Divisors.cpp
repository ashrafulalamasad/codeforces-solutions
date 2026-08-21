#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll MAX = 100000;
    vector<vector<ll>> divs(MAX + 1);
    for(ll d = 1; d <= MAX; d++){
        for(ll m = d; m <= MAX; m += d){
            divs[m].push_back(d);
        }
    }
    ll n; cin >> n;
    vector<ll> last(MAX + 1, 0);
    for(ll i = 1; i <= n; i++){
        ll x, y; cin >> x >> y;
        ll ans = 0;
        for(ll d : divs[x]){
            if(last[d] < i - y){
                ans++;
            }
        }
        cout << ans << endl;
        for(ll d : divs[x]){
            last[d] = i;
        }
    }
    return 0;
}
