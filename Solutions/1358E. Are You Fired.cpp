#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll m = (n + 1) / 2, half = n / 2;
    vector<ll> p(m + 1, 0);
    for(ll i = 1; i <= m; i++){
        ll a; cin >> a;
        p[i] = p[i - 1] + a;
    }
    ll x; cin >> x;
    vector<ll> g(half + 1);
    ll best = 0;
    for(ll j = 0; j <= half; j++){
        best = min(best, j * x - p[j]);
        g[j] = best;
    }
    for(ll k = m; k <= n; k++){
        if(p[m] + (k - m) * x + g[n - k] > 0){
            cout << k << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
