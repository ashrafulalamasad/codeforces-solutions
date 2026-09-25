#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll INF = 1e17;

int main()
{
    fast;
    ll n, ans = 0; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(ll i = 0; i < n; i++) ans += a[i] - 1;
    ll limit = ans + a[n - 1];
    for(ll x = 1; ; x++){
        ll p = 1, cost = 0;
        for(ll i = 0; i < n; i++){
            cost += abs(a[i] - p);
            if(i + 1 < n){
                if(p > INF / x){
                    p = INF;
                    break;
                }
                p *= x;
            }
        }
        ans = min(ans, cost);
        if(p >= limit) break;
    }
    cout << ans << endl;
    return 0;
}
