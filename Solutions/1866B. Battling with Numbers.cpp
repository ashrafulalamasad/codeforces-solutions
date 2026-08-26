#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 998244353

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n), b(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    map<ll, ll> x;
    for(ll i = 0; i < n; i++) x[a[i]] = b[i];
    ll m, ans = 1; cin >> m; vector<ll> c(m), d(m);
    for(ll i = 0; i < m; i++) cin >> c[i];
    for(ll i = 0; i < m; i++) cin >> d[i];
    for(ll i = 0; i < m; i++){
        if(!x.count(c[i]) || x[c[i]] < d[i]){
            ans = 0; break;
        }
        if(x[c[i]] > d[i]) ans = (ans * 2) % MOD;
    }
    if(ans != 0){
        for(ll i = 0; i < n; i++){
            if(!binary_search(c.begin(), c.end(), a[i])){
                ans = (ans * 2) % MOD;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
