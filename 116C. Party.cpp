#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> p(n + 1);
    for(ll i = 1; i <= n; i++) cin >> p[i];
    ll ans = 0;
    for(ll i = 1; i <= n; i++){
        ll depth = 0, cur = i;
        while(cur != -1){
            depth++;
            cur = p[cur];
        }
        ans = max(ans, depth);
    }
    cout << ans << endl;
    return 0;
}
